// GFG: Check if string is rotated by two places
// link: https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1/?page=2&difficulty[]=0&category[]=Arrays&category[]=Strings&sortBy=submissions#


class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.

    bool isRotated(string str1, string str2)
    {
        // Your code here
        string s1 = "";
        string s2 = "";
       
           s1 = s1 + str1.substr(2, str1.length());   
           s1 = s1 + str1.substr(0, 2);               
           
           s2 = s2 + str2.substr(2, str2.length());   
           s2 = s2 + str2.substr(0, 2);     
           
           if(s2 == str1 || s1 == str2)     
               return 1;                    
           else                       
            return 0;                      
        
    }

};
