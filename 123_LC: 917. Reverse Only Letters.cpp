// LC: 917. Reverse Only Letters
// link: https://leetcode.com/problems/reverse-only-letters/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0;
        int r=s.size();
        while( l<=r )
        {
            if( ( s[l] >='A' && s[l] <='Z' ) ||  ( s[l] >='a' && s[l] <='z' ) )
            {
                if( ( s[r] >='A' && s[r] <='Z' ) ||  ( s[r] >='a' && s[r] <='z' ) )
                {
                    swap( s[l], s[r] );
                    l++;
                    r--;
                }
                else
                    r--;
            }
            else
                l++;
        }
        return s;
    }
};
