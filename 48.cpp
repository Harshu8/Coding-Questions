// GFG: Count Inversions
// link: https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1/?page=1&category[]=Arrays&sortBy=submissions#

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long res = 0;
    
    void merge(long long arr[], long long l, long long m, long long r)
    {
        long long n1 = m-l+1;
        long long n2 = r-m;
        long long left[n1];
        long long right[n2];
        
        for(int i=0;i<n1;i++)
        {
            left[i] = arr[l+i];
        }
        for(int i=0;i<n2;i++)
        {
            right[i] = arr[m+1+i];
        }
        long long k=l;
        long long i=0;
        long long j=0;;
        
        while( i<n1 && j<n2 )
        {
            if( left[i] <= right[j] )
            {
                arr[k++] = left[i++];
            }
            else
            {
                arr[k++] = right[j++];
                res = res + (n1-i);
            }
        }
        while( i<n1 )
        {
            arr[k++] = left[i++];
        }
        while( j<n2 )
        {
            arr[k++] = right[j++];
        }
        
    }
    
    void mergeSort(long long arr[], long long l, long long r)
    {
        if(l<r)
        {
            long long mid = l + (r-l)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
        return;
    }
    
    
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mergeSort(arr, 0, N-1);
        return res;
        
        
        
    }

};
