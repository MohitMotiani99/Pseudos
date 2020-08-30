/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector <int> postOrder(Node* root)
{
    if(root==NULL)
    {
        vector<int> v;
        v.clear();
        return v;
    }
    vector<int> ans,v1,v2;
    v1=postOrder(root->left);
    v2=postOrder(root->right);
    ans.insert(ans.end(),v1.begin(),v1.end());
    ans.insert(ans.end(),v2.begin(),v2.end());
    ans.push_back(root->data);
    
    return ans;
  // Your code here
}
