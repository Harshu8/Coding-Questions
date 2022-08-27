// GFG: Intersection of two arrays
// link: https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1?page=1&status[]=unsolved&category[]=Arrays&sortBy=submissions


class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> s1;
        set<int> s2;
        int ans=0;
        
        for( int i=0;i<n;i++ )
        {
            s1.insert(a[i]);
        }
        for( int i=0;i<m;i++ )
        {
            s2.insert(b[i]);
        }
        for( auto i:s2 )
        {
            if( s1.count(i) )
            {
                ans++;
            }
        }
        return ans;
    }
};
