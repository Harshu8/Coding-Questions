// GFG: Top K Frequent Elements in Array
// link: https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1?page=3&difficulty[]=0&category[]=Arrays&sortBy=submissions

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>> v;
        vector<int> ans;
        for( auto i:mp )
        {
            v.push_back({i.second, i.first });
        }
        
        sort( v.begin(), v.end() );
        reverse( v.begin(), v.end() );
        int j=0;
        for( auto i:v )
        {
            cout<<i.first<<" : "<<i.second<<" : " <<j<<" : "<<k<<endl;
            if( j<k )
            {
                ans.push_back( i.second );
            }
            j++;
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
