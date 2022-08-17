// GFG: Rotate a 2D array without using extra space
// link: https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	    for( int i=0;i<n;i++ )
	    {
	        for( int j=i;j<n;j++ )
	        {
	            int temp = arr[i][j];
	            arr[i][j] = arr[j][i];
	            arr[j][i] = temp;
	        }
	    }
	    reverse(arr.begin(), arr.end());
	}

};
