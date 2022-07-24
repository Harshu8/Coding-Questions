// Leetcode: 3. Longest Substring Without Repeating Characters
// link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxLength=0;
        int i=0,j=0;
        int n = s.size();
        while( j<n )
        {
            if( st.find(s[j]) == st.end() ) //if s[j] is not present in the set
            {
                st.insert(s[j++]); // Insert the character in set and update the j counter
                if( maxLength < j-i ) //Check if the new distance is longer than the current answer
                {
                    maxLength = j-i;
                }
            }
            else
            {
                //If character does exist in the set, ie. it is a repeated character, 
				//we update the left side counter i, and continue with the checking for substring. 
				
                st.erase(s[i++]);
            }
        }
        return maxLength;
    }
};
