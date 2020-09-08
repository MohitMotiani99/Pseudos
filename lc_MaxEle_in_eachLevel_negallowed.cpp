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
    vector<int> largestValues(TreeNode* root) {
        queue<pair<TreeNode*,string> > q;
        q.push({root,""});
        TreeNode *temp=new TreeNode(-1);
        q.push({temp,"del"});
        int maxr=INT_MIN;
        vector<int> v;
        if(root==NULL)
            return v;
        while(!q.empty()){
            pair<TreeNode*,string> t=q.front();
            q.pop();
            if(t.second=="del"){
                v.push_back(maxr);
                if(q.size()!=0)
                    q.push(t);
                maxr=INT_MIN;
            }
            else{
                maxr=max(maxr,t.first->val);
                if(t.first->left)
                    q.push({t.first->left,""});
                if(t.first->right)
                    q.push({t.first->right,""});
            }
        }
        return v;
    }
};
