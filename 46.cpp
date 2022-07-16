// GFG: Twice Counter 
// link: https://practice.geeksforgeeks.org/problems/twice-counter4236/1/?page=3&difficulty[]=0&status[]=unsolved&category[]=Arrays&category[]=Strings&sortBy=submissions

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           int count=0;
           unordered_map<string,int> m;
           for(int i=0;i<n;i++)
           {
               m[list[i]]++;
           }
           for(auto x:m)
           {
               if( x.second == 2)
               {
                   count++;
               }
           }
           return count;
        }

};
