// GFG: Reverse array in groups
// link: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        if( k >= n )
        {
            reverse( arr.begin(), arr.end() );
        }
        if( k < n )
        {
            int i=k;
            reverse( arr.begin(), arr.begin()+k );
            while( i < n )
            {
                if( n-i < k )
                    reverse( arr.begin()+i, arr.end() );
                else
                    reverse( arr.begin()+i, arr.begin()+i+k );
                    
                i += k;
            }
        }
    }
};
