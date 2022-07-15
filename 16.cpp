// GFG: Large Factorial 
// link: https://practice.geeksforgeeks.org/problems/large-factorial4721/1/?page=2&difficulty[]=1&category[]=Arrays&sortBy=accuracy#

class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        vector<long long> ans;
        long long maxVal = INT_MIN;
        for( int i=0;i<n;i++ )
        {
            maxVal = max(a[i],maxVal);
        }
        long long maxValIndex[maxVal+1] ={-1};
        maxValIndex[0] = 1;
        maxValIndex[1] = 1;
        for( int i=2;i< maxVal+1;i++ )
        {
            // cout<<maxValIndex[i]<<endl;
            // cout<<maxValIndex[i-1]<<endl;
            maxValIndex[i] = ( i*maxValIndex[i-1] )%1000000007;
        }
        for( int i=0;i<n;i++ )
        {
            ans.push_back(maxValIndex[a[i]]);
        }
        return ans;
    }
};
