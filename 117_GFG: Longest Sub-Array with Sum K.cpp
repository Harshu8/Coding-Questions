// GFG: Longest Sub-Array with Sum K
// link: https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> mp;
        int sum = 0;
        int mx=0;
        for( int i=0;i<N;i++ )
        {
            sum += A[i];
            if( sum == K )
            {
                mx = max( mx, i+1 );
            }
            if( mp.find(sum) == mp.end() )
            {
                mp[sum] = i;
            }
            if( mp.find( sum-K ) != mp.end() )
            {
                mx = max( mx, i-mp[sum-K]);
            }
        }
        return mx;
    } 
};
