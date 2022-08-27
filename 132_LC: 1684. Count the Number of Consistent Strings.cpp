// LC: 1684. Count the Number of Consistent Strings
// link: https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int> st;
        for( int i=0;i<allowed.size();i++ )
        {
            st.insert( allowed[i] );
        }
        int ans=0;
        for( int i=0;i<words.size();i++ )
        {
            int flag=0;
            for( int j=0;j<words[i].size();j++ )
            {
                if( st.find(words[i][j]) == st.end() )
                {
                    flag=1;
                    continue;
                }
            }
            if( flag == 0 )
            {
                ans++;
            }
        }
        return ans;
    }
};
