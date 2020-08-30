int helper(Node *root){
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    {
        int a=root->data;
        root->data=0;
        return a;
    }
    int a=root->data;
    root->data=helper(root->left)+helper(root->right);
    return root->data+a;
}

// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
void toSumTree(Node *node)
{
    int x=helper(node);
    //leafT(node);
    // Your code here
}

