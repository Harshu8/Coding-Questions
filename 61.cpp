// GFG: Minimum element in BST
// link: https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Tree&sortBy=submissions


void inorder(Node* root, vector<int> &v, int &min)
{
    if( root != NULL )
    {
        inorder( root -> left , v, min );
        if( root -> data < min )
        {
            min = root -> data;
        }
        v.push_back( root -> data );
        inorder( root -> right, v, min );
    }
}

int minValue(Node* root) {
    // Code here
    int min = INT_MAX;
    vector<int> v;
    inorder( root, v, min );
    if( v.size() == 0 )
    {
        return -1;
    }
    return min;
}
