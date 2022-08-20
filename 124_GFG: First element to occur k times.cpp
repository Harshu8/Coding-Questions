// GFG: First element to occur k times
// link: https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int, int> mp;
        for( int i=0;i<n;i++ )
        {
            mp[a[i]]++;
            if( mp[a[i]] == k )
            {
                return a[i];
            }
        }
        return -1;
    }
};
