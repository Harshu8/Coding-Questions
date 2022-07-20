// GFG: Merge Sort
// link: https://practice.geeksforgeeks.org/problems/merge-sort/1

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int s1 = m - l +1;
         int s2 = r -m;
         
         int arrayL[s1];
         int arrayR[s2];
         
         for( int i=0;i<s1;i++ )
         {
             arrayL[i] = arr[l+i];
         }
         for( int i=0;i<s2;i++ )
         {
             arrayR[i] = arr[m+i+1];
         }
         
         int i=0,j=0;
         int k=l;
         
         while( i< s1 && j < s2 )
         {
             if( arrayL[i] >= arrayR[j] )
             {
                 arr[k] = arrayR[j];
                 j++;
                 k++;
             }
             else
             {
                 arr[k] = arrayL[i];
                 i++;
                 k++;
             }
         }
         while( i < s1 )
         {
             arr[k] = arrayL[i];
             i++;
             k++;
         }
         while( j < s2 )
         {
             arr[k] = arrayR[j];
             j++;
             k++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if( l >= r )
        {
            return;
        }
        int m = l + ( r-l)/2;
        mergeSort( arr, l, m);
        mergeSort( arr, m+1, r);
        merge( arr, l, m, r);
        
    }
};
