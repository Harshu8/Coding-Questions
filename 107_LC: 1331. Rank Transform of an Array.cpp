// Leetcode: 1331. Rank Transform of an Array
// link: https://leetcode.com/problems/rank-transform-of-an-array/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int> s(arr.begin(), arr.end() );
        unordered_map<int, int> m;
        int rank = 1;
        
        for( auto &i: s)
        {
            m[i] = rank;
            rank++;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = m[arr[i]];
        }
        return arr;
    }
};
