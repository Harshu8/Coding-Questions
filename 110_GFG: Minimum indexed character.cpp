// GFG: Minimum indexed character
// link: https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1


class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        set<char> s;
        for( int i=0;i<patt.size();i++ )
        {
            s.insert(patt[i]);
        }
        for( int i=0;i<str.size();i++ )
        {
            if( s.find(str[i]) != s.end() )
            {
                return i;
            }
        }
        return -1;
    }
};
