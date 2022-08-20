// LC: 724. Find Pivot Index
// link: https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        if( nums.size() == 1 )
        {
            return 0;
        }
        int rsum = 0;
        int lsum = 0;
        
        for( int i=0;i<nums.size();i++ )
        {
            rsum = rsum + nums[i];            
        }
        
        for( int i=0;i<nums.size();i++ )
        {
            rsum = rsum - nums[i];
            if( rsum == lsum )
            {
                return i;
            }
            lsum = lsum + nums[i];
        
        }
        return -1;
    }
};
