// CodeStudio: Minimum Elements
// link: https://www.codingninjas.com/codestudio/problems/minimum-elements_3843091?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// code:

int solveRecursion( vector<int>& num, int x )
{
    if( x == 0 )
    {
        return 0;
    }
    if( x < 0 )
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for( int i=0;i<num.size();i++)
    {
        int ans = solveRecursion( num, x-num[i] );
        if( ans != INT_MAX )
            mini = min( mini, 1+ans ); 
    }    
    return mini;   
}

int solveRecusionWithMemoisation( vector<int>& num, int x, vector<int>& dp )
{
    if( x == 0 )
    {
        return 0;
    }
    if( x < 0 )
    {
        return INT_MAX;
    }
    
    int mini = INT_MAX;
    
    if( dp[x] != -1 )
    {
        return dp[x];
    }
    
    for( int i=0;i<num.size();i++)
    {
        int ans = solveRecusionWithMemoisation( num, x-num[i], dp );
        if( ans != INT_MAX )
            mini = min( mini, 1+ans ); 
    }    
    
    dp[x] = mini;
    return mini;   
}

int solveTabulation( vector<int>& num, int x )
{
    vector<int> dp( x+1, INT_MAX );
    dp[0] = 0 ;
    
    
    for( int i=1;i<=x;i++ )
    {
        for( int j=0;j<num.size();j++ )
        {
            if( ( i-num[j] >= 0 ) && dp[i-num[j]] != INT_MAX )
                dp[i] = min( dp[i], 1+dp[i-num[j]]);
        }
    }
    if( dp[x] == INT_MAX )
    {
        return -1;
    }
    else
    {
        return dp[x];        
    }
}
    
int minimumElements(vector<int> &num, int x)
{
    // Using Recursion only
 
    /*
        int ans = solveRecursion( num, x );
        if( ans == INT_MAX )
        {
            return -1;
        }
        return ans;
    */
    
    // Using Recursion + Memoisation
    /*
        vector<int> dp( x+1, -1 );
        int ans = solveRecusionWithMemoisation( num, x, dp );
        if( ans == INT_MAX )
        {
            return -1;
        }
        return ans;
     */
    
    // Using tabulation Method
    int ans = solveTabulation( num, x );
    return ans;
    
    // we can not further optimized it in the point of view of space. So the tabulation method is the optimized approach.
}
