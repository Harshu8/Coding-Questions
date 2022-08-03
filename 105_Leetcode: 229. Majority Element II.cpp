// Leetcode: 229. Majority Element II
// link: https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans;
        
        int n = nums.size();
        
        for( int i=0;i<n;i++ )
        {
            m[nums[i]]++;
        }
        
        for( auto i:m ) 
        {
            if( i.second > n/3 ) 
            {
                ans.push_back(i.first);
            }            
        }
        return ans;
    }
};
