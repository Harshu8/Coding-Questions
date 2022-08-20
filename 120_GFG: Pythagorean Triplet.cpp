// GFG: Pythagorean Triplet
// link: https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) 
	{
	    // code here
        for( int i=0;i<n;i++ ) 
        {
            arr[i]=arr[i]*arr[i];
        }
        sort( arr, arr+n );
        for( int i=0;i<n;i++ )
        {
            int start=0;
            int end=n-1;
            while( start < end )
            {
                if( arr[start] + arr[end] == arr[i] )
                    return true;
                if( arr[start] + arr[end] > arr[i] )
                    end--;
                else
                    start++;
            }  
        }
        return false;
	}
};
