// GFG: Key Pair
// link: https://practice.geeksforgeeks.org/problems/key-pair5616/1/?page=2&difficulty[]=0&category[]=Arrays&category[]=Strings&sortBy=submissions#

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    int l=0;
	    int r=n-1;
	    int sum;
	    sort(arr, arr+n);
	    while(l<r)
	    {
	        sum = arr[l]+arr[r];
	        if( sum == x )
	        {
	            return true;
	        }
	        else if( sum > x )
	        {
	            r--;
	        }
	        else
	        {
	            l++;
	        }
	    }
	    return false;
	}
