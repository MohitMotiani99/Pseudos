/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void leafStr(TreeNode* root,string& str){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {str+=(char)(root->val+'0');return;}
        
        
        leafStr(root->left,str);
        leafStr(root->right,str);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string r1="",r2="";
        leafStr(root1,r1);
        leafStr(root2,r2);
        
        //cout<<"h "<<r1<<" "<<r2<<endl;
        
        return (r1==r2);
    }
};
