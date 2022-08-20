// GFG: Find triplets with zero sum
// link: https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions


class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        
        for(int i=0 ; i<n ; i++)
        {
            int sum = arr[i];
            int target = 0-sum;
            
            int start = i+1;
            int end = n-1;
            
            while(start < end)
            {
                if(arr[start]+arr[end] == target)
                {
                    cout<<arr[start]<<" : "<<arr[end]<<" : "<<sum<<endl;
                    return true;
                    
                }
                else if(arr[start]+arr[end] < target) 
                    start++;
                else 
                    end--;
            }
        }
        return false;
    }
};
