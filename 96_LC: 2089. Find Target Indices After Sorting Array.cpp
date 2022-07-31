// Leetcode: 2089. Find Target Indices After Sorting Array
// link: https://leetcode.com/problems/find-target-indices-after-sorting-array/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort( nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++ )
        {
            if( nums[i] == target )
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
