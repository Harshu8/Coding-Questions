// Leetcode: 34. Find First and Last Position of Element in Sorted Array
// link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        if( nums.size()==0 )
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        int firstPos = nums.size() + 1;
        int lastPos = -1;
        
        int start = 0;
        int end = nums.size()-1;
        while( start<=end )
        {
            int mid = start + (end-start)/2;
            if( nums[mid] == target )
            {
                if( mid < firstPos )
                {
                    firstPos = mid;
                }
                end = mid-1;
            }
            else if( nums[mid] > target )
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        
        start =0;
        end = nums.size()-1;
        
        while( start<=end )
        {
            int mid = start + (end-start)/2;
            if( nums[mid] == target )
            {
                if( mid > lastPos )
                {
                    lastPos = mid;
                }
                start = mid+1;
            }
            else if( nums[mid] > target )
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        
        if( firstPos == nums.size()+1 )
            ans.push_back(-1);
        else
            ans.push_back(firstPos);
        
        ans.push_back(lastPos);
        return ans;
    }
};
