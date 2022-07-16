// GFG: Smallest Positive missing number
// link: https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?page=2&category[]=Arrays&curated[]=2&sortBy=submissions#


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr, arr+n);
        int temp=1;
        for(int i=0;i<n;i++)
        {
            if( arr[i]>0 && arr[i] == temp )
            {
                temp++;
            }
        }
        return temp;
    } 
};
