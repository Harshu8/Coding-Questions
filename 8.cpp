// Leetcode - 153. Find Minimum in Rotated Sorted Array
// link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int min = INT_MAX;
        while( s <= e )
        {
            int mid = s + ( e-s )/2;

            if( nums[s] <= nums[mid] )
            {
                if( min > nums[s] )
                {
                    min = nums[s];
                }
                s = mid + 1;
                
            }
            else
            {
                if( min > nums[mid] )
                {
                    min = nums[mid];
                }
                e = mid - 1;
            }
        }
        return min;
    }
};
