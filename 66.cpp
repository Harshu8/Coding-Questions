// GFG: Height of Binary Tree
// link: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

int height(struct Node* node){
    // code here 
    if( node == NULL )
    {
        return 0;
    }
    int leftSubtreeHeight = height( node -> left );
    int rightSubtreeHeight = height( node -> right );
    int height = max( leftSubtreeHeight, rightSubtreeHeight) + 1;
    return height;   
}
