// LC: 387. First Unique Character in a String
// link: https://leetcode.com/problems/first-unique-character-in-a-string/


class Solution {
public:
    int firstUniqChar(string s) {
        int ans=0;
        map<char, int> mp;
        for( int i=0;i<s.size();i++ )
        {
            mp[s[i]]++;
        }
        set<char> st;
        for( auto i:mp )
        {
            if( i.second == 1 )
                st.insert(i.first);
        }
        for( int i=0;i<s.size();i++ )
        {
            if( st.find(s[i]) != st.end() )
            {
                return i;
            }
        }
        return -1;
    }
};
