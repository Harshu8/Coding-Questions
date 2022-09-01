// CodeStudio: Cut Into Segments
// link: https://www.codingninjas.com/codestudio/problems/cut-into-segments_1214651?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// Code:

#include<limits.h>
int solveRecursion( int n, int x, int y, int z )
{
    if( n == 0 )
    {
        return 0;
    }   
    if( n < 0 )
    {
        return INT_MIN;
    }
    
    int ans1 = solveRecursion( n-x, x, y, z ) + 1 ;
    int ans2 = solveRecursion( n-y, x, y, z ) + 1 ;
    int ans3 = solveRecursion( n-z, x, y, z ) + 1 ;
    
    return max(ans1, max(ans2, ans3) );    
}

int solveMemo( int n, int x, int y, int z, vector<int>& dp )
{
    if( n == 0 )
    {
        return 0;
    }   
    if( n < 0 )
    {
        return INT_MIN;
    }
    
    if( dp[n] != -1 )
    {
        return dp[n];
    }
    
    int ans1 = solveMemo( n-x, x, y, z, dp ) + 1 ;
    int ans2 = solveMemo( n-y, x, y, z, dp ) + 1 ;
    int ans3 = solveMemo( n-z, x, y, z, dp ) + 1 ;
    
    dp[n] = max(ans1, max(ans2, ans3) ); 
    
    return dp[n];
}

int solveTabulation( int n, int x, int y, int z )
{
    vector<int> dp( n+1, INT_MIN );
    dp[0] = 0;
    
    for( int i=1;i<=n;i++ )
    {
        if( (i-x) >= 0 )
            dp[i] = max( dp[i], dp[i-x] + 1);
        if( (i-y) >= 0 )
            dp[i] = max( dp[i], dp[i-y] + 1);
        if( (i-z) >= 0 )
            dp[i] = max( dp[i], dp[i-z] + 1);
    }
    
    if( dp[n] < 0 )
        return 0;
    else
        return dp[n];
    
}


int cutSegments(int n, int x, int y, int z) {
	// Write your code here.
    //Using Recursion only
    /*
        int ans = solveRecursion( n, x, y, z );
        if( ans<0 )
            return 0;
        else
            return ans;
    */
    
    //Using Recursion + Memoisation
    /*    
        vector<int> dp( n+1, -1 );
        int ans = solveMemo( n, x, y, z, dp );
            if( ans<0 )
                return 0;
            else
                return ans;
    */
    
    //Using Tabulation Method
    int ans = solveTabulation( n, x, y, z );
    return ans;
    
    // Space optimization is not possible
    
}
