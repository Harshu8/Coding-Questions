// Leetcode - 81. Search in Rotated Sorted Array II
// link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

// once if you see the problem statement and the came here then the code is easily understandable.

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while( s <= e )
        {
            int mid = s + ( e-s )/2;
            if( nums[mid] == target )
            {
                return true;
            }
            if( ( nums[s] == nums[mid] ) && ( nums[mid] == nums[e]) )
            {
                s++;
                e--;
            }
            else if( nums[s] <= nums[mid] )
            {
                if( (nums[s] <= target) && (target < nums[mid]) )
                {
                    e = mid-1;
                }
                else
                {
                    s = mid+1;
                }
            }
            else
            {
                if( (nums[mid] < target) && ( nums[e] >= target ) )
                {
                    s = mid+1;
                }
                else
                {
                    e = mid-1;
                }
            }
        }
        return false;
    }
};
