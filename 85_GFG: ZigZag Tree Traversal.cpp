// GFG: ZigZag Tree Traversal
// link: https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if( root == NULL )
    	{
    	    return ans;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while( !q.empty() )
    	{
    	    int size = q.size();
    	    vector<int> tempAns(size);
    	    
    	    for( int i=0;i<size;i++ )
    	    {
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        int index = leftToRight ? i : size - i - 1;
    	        tempAns[index] = frontNode -> data;
    	        
    	        if( frontNode -> left )
    	            q.push( frontNode -> left );
    	        if( frontNode -> right )
    	            q.push( frontNode -> right );
    	    }
    	    
    	    leftToRight = !leftToRight;
    	    
    	    for( auto i: tempAns )
    	        ans.push_back(i);
    	}
    	return ans;
    }
};
