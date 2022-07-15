// Leetcode: 350. Intersection of Two Arrays II
// link: https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        vector<int> ans;
        for( int i=0;i<nums1.size();i++ )
        {
            freq[nums1[i]]++;
        }
        for( int i=0;i<nums2.size();i++ )
        {
            if( freq[nums2[i]] > 0 )
            {
                // For this input you want to insert the 2 twice in your output vector and not just once so you subtract the 2's key's value using freq[nums2[i]]-- once and then next time again when you find it still > 0 you add it once again to the output vector.
                // If cannot use it then the value are repeat 
                freq[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        
        return ans;
    }
};
