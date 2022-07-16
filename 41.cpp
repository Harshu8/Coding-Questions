// GFG: Maximize sum after K negations 
// link: https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1/?page=3&difficulty[]=0&category[]=Arrays&sortBy=submissions#


class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int sum =0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && k>0)
            {
                a[i]= -a[i];
                k--;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        sort(a,a+n);
        if(k%2!=0)
            sum = sum + (-2 * a[0]);
        return sum;
    }
};
