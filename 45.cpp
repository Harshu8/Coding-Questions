// GFG: Two Repeated Elements 
// link: https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1/?page=3&difficulty[]=0&category[]=Arrays&category[]=Strings&sortBy=submissions#

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int> v;
        int freq[N+1] = {0};
        for(int i=0;i<N+2;i++)
        {
            freq[arr[i]]++;
            if(freq[arr[i]]==2)
            {
                v.push_back(arr[i]);
            }
        }
            
        
        return v;
    }
};
