// GFG: Maximum of all subarrays of size k
// link: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1?page=1&difficulty[]=1&status[]=unsolved&category[]=Arrays&sortBy=submissions


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        multiset<int> s; 
        
        for( int i=0;i<k;i++ )
        {
            s.insert(arr[i]);
        }
        
        int j=0;
        ans.push_back(*s.rbegin());
        for( int i=k;i<n;i++ )
        {
            auto it = s.find(arr[j]);
            s.erase(it);
            s.insert(arr[i]);
            ans.push_back(*s.rbegin());
            j++;
        }
        return ans;
    }
};
