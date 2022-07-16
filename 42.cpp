// GFG: Addition of submatrix 
// link: https://practice.geeksforgeeks.org/problems/addition-of-submatrix5835/1/?page=7&difficulty[]=0&category[]=Arrays&sortBy=submissions#

class Solution{
public:

	long long subMatrixSum(vector<int> arr[], int n, int m, int x1, int y1, int x2,
	                       int y2) {
	    // code here
	    long long sum=0;
	    for(int i=x1-1;i<x2;i++)
	    {
	        for(int j=y1-1;j<y2;j++)
	        {
	            sum+=arr[i][j];
	        }
	    }
	    return sum;
	    
	}

};
