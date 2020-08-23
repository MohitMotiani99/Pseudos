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
    TreeNode* makeTree(vector<int>& nums,int s,int e){
        if(e-s+1==1)
            return new TreeNode(nums[s]);
        if(s>e)
            return NULL;
        
        int mid=(e+s)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=makeTree(nums,s,mid-1);
        root->right=makeTree(nums,mid+1,e);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeTree(nums,0,nums.size()-1);
    }
};
