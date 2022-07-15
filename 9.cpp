// Leetcode: 349. Intersection of Two Arrays
// link: https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int arr1[1001]={0};
        int arr2[1001]={0};
        for( int i=0;i<nums1.size();i++ ) {
            arr1[nums1[i]]++;
        }
        for( int i=0;i<nums2.size();i++ ) {
            arr2[nums2[i]]++;
        }
        vector<int> ans;
        for( int i=0;i<=1000;i++ ) {
            if( arr1[i] >0 && arr2[i]>0 && arr1[i]!=0 && arr2[i]!=0 ) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
