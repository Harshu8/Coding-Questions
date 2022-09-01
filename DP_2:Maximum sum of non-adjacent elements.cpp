// CodeStudio: Maximum sum of non-adjacent elements
// link: https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar


// Code:

int solveRecursion( vector<int>& nums, int n )
{
    //Base Case
    if( n < 0 )
    {
        return 0;
    }
    if( n==0 )
    {
        return nums[0];
    }
    
    // include
    int include = solveRecursion( nums, n-2 ) + nums[n];
    
    //exclude
    int exclude = solveRecursion( nums, n-1 );
    
    return max(include, exclude);
}
int solveRecWithMemo( vector<int>& nums, int n, vector<int>& dp )
{
    //Base Case
    if( n < 0 )
    {
        return 0;
    }
    if( n==0 )
    {
        return nums[0];
    }
    
    if( dp[n] != -1 )
    {
        return dp[n];
    }
    
    // include
    int include = solveRecWithMemo( nums, n-2, dp ) + nums[n];
    
    //exclude
    int exclude = solveRecWithMemo( nums, n-1, dp );
    
    
    dp[n] = max(include, exclude); 
    return dp[n];
}

int solveTabulation( vector<int>& nums )
{
    int n = nums.size();
    vector<int> dp( n, 0 );
    //Base Case
    dp[0] = nums[0];
    
    for( int i=1;i<n;i++ )
    {
        int include = dp[i-2] + nums[i];
        int exclude = dp[i-1] + 0;
        dp[i] = max( include, exclude );
    }
    return dp[n-1];
}

int solveTabWithSpaceOptimization( vector<int>& nums )
{
    int n = nums.size();
    vector<int> dp( n, 0 );
    //Base Case
    if( n == 0 )
    {
        return nums[0];
    }
    dp[0] = nums[0];
    int prev1 = nums[0];
    int prev2 = 0;
    
    for( int i=1;i<n;i++ )
    {
        int include = prev2 + nums[i];
        int exclude = prev1 + 0;
        int curr = max( include, exclude );
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;    
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    
    // Using Recursion
    /*
        int n = nums.size()-1;
        int ans = solveRecursion( nums, n );
        return ans;
    */
    
    // Using Recursion + Memoisation
    /*
        int n = nums.size();
        vector<int> dp( n, -1 ) ;
        int ans = solveRecWithMemo( nums, n-1, dp );
        return ans;
    */
    
    // Using Tabulation Method
    /*
        int ans = solveTabulation( nums );
        return ans;
    */
    
    // Using Tabulation Method with sapce optimized
    int ans = solveTabWithSpaceOptimization( nums );
    return ans;
}










