// GFG: Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node)
// link: https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1


class Solution
{
private:
    int solve( Node* root, int &maxSum, int &maxLen, int len, int sum )
    {
        if( root == NULL )
        {
            if( len > maxLen )
            {
                maxLen = len;
                maxSum = sum;
            }
            else if( maxLen == len )
            {
                maxSum = max( sum, maxSum );
            }
            return maxSum;
        }
        sum = sum + root->data;
        
        solve( root->left, maxSum, maxLen, len+1, sum );
        solve( root->right, maxSum, maxLen, len+1, sum );
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int maxSum=0, maxLen=0,len=0, sum=0;
        solve( root, maxSum, maxLen, len, sum );
        return maxSum;
    }
};
