// GFG: Search in a row-column sorted Matrix
// link: https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?page=2&curated[]=1&sortBy=submissions


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0, j=m-1;
        while( i<n && j>=0 )
        {
            if( matrix[i][j] == x )
            {
                return true;
            }
            else if( matrix[i][j] > x )
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
