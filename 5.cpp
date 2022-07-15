// GFG - Maximum Product Subarray
// link: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    long long start = 1, end = 1; // start and end ko ham multiply ke liye use krenege.
      // start front se multiply hote huye aayega.
      // end endPosition se multiply hote huye aayega.
    
	    long long ans = INT_MIN;
    
      // i start from front position and j start from the end position;
	    int i=0, j=n-1;
	    while( i<n && j>=0 )
	    {
	        start = start * arr[i];
	        end = end * arr[j];
	        ans = max( ans, max( start, end ) ); // ans mei start , end ya ans mei se maximum ko store kra lenge.
        
	        if( arr[i] == 0 ) // jb hame value of array at position i, 0 milti hai to ham start ko 1 kr denge.
	        {
	            start = 1;
	        }
	        if( arr[j] == 0 ) // // jb hame value of array at position j, 0 milti hai to ham end ko 1 kr denge.
	        {
	            end = 1;
	        }
	        i++; // starting wale pointer ko aage bada denge.
	        j--; // end wale pointer ko kam krte rahenge.
	    }
	    return ans;
	}
};
