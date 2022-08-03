// Leetcode: 75. Sort Colors OR Sort 0 1 2
// link: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while( mid <= high )
        {
            if( nums[mid] == 0 )
            {
                swap( nums[mid], nums[low] );
                low++;
                mid++;
            }
            else if( nums[mid] == 1  )
            {
                mid++;
            }
            else
            {
                swap( nums[high], nums[mid] );
                high--;
            }
        }
    }
};
