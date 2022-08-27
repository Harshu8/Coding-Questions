// GFG: Maximum Difference
// link:https://practice.geeksforgeeks.org/problems/maximum-difference-1587115620/1

int findMaxDiff(int A[], int n)
    {
        //Your code here
        vector<int> ls, rs;
    	int i,j;
    	
    	for(i=0;i<n;i++)
    	{
    	    for(j=i;j>=0;j--)
    	    {
    	        if(A[j] < A[i])
    	        {
    	            ls.push_back(A[j]);
    	            break;
    	        }
    	    }
    	    if(j == -1)
    	    {
    	        ls.push_back(0);
    	    }
    	}
    	for(i=0;i<n;i++)
    	{
    	    for(j=i;j<n;j++)
    	    {
    	        if(A[j] < A[i])
    	        {
    	            rs.push_back(A[j]);
    	            break;
    	        }
    	    }
    	    if(j == n)
    	    {
    	        rs.push_back(0);
    	    }
    	}
    	int max=0;
    	for(int i=0;i<ls.size();i++)
    	{
    	    ls[i] = abs(ls[i]-rs[i]);
    	    if(ls[i]>max)
    	    {
    	        max=ls[i];
    	    }
    	}
    	return max;
    }
