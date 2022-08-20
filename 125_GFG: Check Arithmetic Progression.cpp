// GFG: Check Arithmetic Progression
// link: https://practice.geeksforgeeks.org/problems/check-arithmetic-progression1842/1?page=4&difficulty[]=-1&category[]=Arrays&sortBy=submissions

class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        if(n==1)
        {
            return true;
        }
        sort(arr,arr+n);
        int cd=arr[1]-arr[0];
        for(int i=2;i<n;i++)
        {
            if( arr[i] - arr[i-1] != cd ) 
            {
                return false;
            }
        }
        return true;
    }

};
