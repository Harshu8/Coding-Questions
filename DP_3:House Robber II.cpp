// CodeStudio: House Robber II
// link: https://www.codingninjas.com/codestudio/problems/house-robber_839733?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// Code:

long long int solve( vector<int> nums )
{
    int n = nums.size();
    vector<int> dp( n, 0 );
    //Base Case
    if( n == 0 )
    {
        return nums[0];
    }
    dp[0] = nums[0];
    long long int prev1 = nums[0];
    long long int prev2 = 0;
    
    for( int i=1;i<n;i++ )
    {
        long long int include = prev2 + nums[i];
        long long int exclude = prev1 + 0;
        long long int curr = max( include, exclude );
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;    
}


long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if( n == 1 )
    {
        return valueInHouse[0];
    }
    
    vector<int> f,l;
    
    for( int i=0;i<n;i++ )
    {
        if( i != n-1 )
        {
            f.push_back(valueInHouse[i]);
        }
        if( i != 0 )
        {
            l.push_back(valueInHouse[i]);
        }       
    }
    long long int ans1 = solve( f );
    long long int ans2 = solve( l );
   
    return max( ans1, ans2 ) ;  
}
