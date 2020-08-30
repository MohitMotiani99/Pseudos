/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void po(Node* root,vector<int> &ans){
    if(root==NULL)
    return;
    
    ans.push_back(root->data);
    po(root->left,ans);
    po(root->right,ans);
}
vector <int> preorder(Node* root)
{
  // Your code here
    
    vector<int> ans;
    po(root,ans);
    return ans;

}
