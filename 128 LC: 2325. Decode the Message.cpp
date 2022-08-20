// LC: 2325. Decode the Message
// link: https://leetcode.com/problems/decode-the-message/

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;
        int j=0;
        for( int i=0;i<key.size();i++ )
        {
            if( key[i] != ' ')
            {
                if( mp.find(key[i]) == mp.end() )
                {
                    mp[key[i]] = j+'a';
                    j++;                    
                }
            }               
        }
        key.erase(key.begin(), key.end() );
        
        for( int i=0;i<message.size();i++ )
        {
            if( message[i] == ' ' )
            {
                key += ' ';
            }
            else
            {
                key += mp[message[i]];
            }
            
        }
        return key;
    }
};
