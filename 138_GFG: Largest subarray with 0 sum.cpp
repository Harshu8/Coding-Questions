// GFG: Largest subarray with 0 sum
// link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?page=1&status[]=unsolved&category[]=Arrays&curated[]=1&sortBy=submissions


class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int> mp;
        int sum=0;
        int mx = 0;
        for( int i=0;i<n;i++ )
        {
            sum += A[i];
            if( sum == 0 )
            {
                mx = max( mx, i+1 );
            }
            else if( mp.find( sum ) == mp.end() )
            {
                mp[sum] = i;
            }
            else
            {
                mx = max( mx, i - mp[sum] );
            }
        }
        return mx;
    }
};
