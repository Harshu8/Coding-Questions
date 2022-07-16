// Leetcode: 412. Fizz Buzz
// link: https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string s35 = "FizzBuzz";
        string s3 = "Fizz";
        string s5 = "Buzz";
        vector<string> v;
        
        for(int i=1;i<=n;i++)
        {
            if( (i%3)==0 && (i%5)==0 )
            {
                v.push_back(s35);
            }
            else if( i%3 == 0 )
            {
                v.push_back(s3);
            }
            else if( i%5 == 0 )
            {
                v.push_back(s5);
            }
            else
            {
                string si = to_string(i);
                v.push_back(si);
            }
        }
        return v;
    }
};
