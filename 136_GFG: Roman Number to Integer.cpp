// GFG: Roman Number to Integer
// link:https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1


class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int n = str.length(); 
        int ans=mp[str[n-1]];
        for( int i=str.length()-1;i>=0;i-- ) 
        {
            if( mp[str[i]] > mp[str[i-1]] )
            {
                ans = ans - mp[str[i-1]];
            }
            else
            {
                ans = ans + mp[str[i-1]];
            }
        }
        return ans;
    }
};
