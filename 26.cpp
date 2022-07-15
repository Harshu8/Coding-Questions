// GFG: Delete middle element of a stack
// link: https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/?page=1&category[]=Stack&sortBy=submissions#



class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int middle = sizeOfStack / 2;
        vector<int> v;
        for( int i=0;i<sizeOfStack;i++)
        {
            if( i != middle )
            {
                v.push_back(s.top());
            }
            s.pop();
        }
        reverse(v.begin(), v.end());
        for( int i=0;i<v.size();i++)
        {
            s.push(v[i]);
        }
    }
};
