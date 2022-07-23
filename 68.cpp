// GFG: Count Leaves in Binary Tree
// link: https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1


void cntLeaves( Node* root , int &cnt)
{
    if( root != NULL )
    {
        if( root -> left == NULL && root -> right == NULL )
        {
            cnt++;
        }
        if( root -> left )
            cntLeaves( root -> left, cnt );
        if( root -> right )
            cntLeaves( root -> right, cnt );
    }
    return;
    
}
   
int countLeaves(Node* root)
{
  // Your code here
  int cnt = 0 ;
  cntLeaves( root, cnt );
  return cnt;
}
