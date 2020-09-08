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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        if(root==NULL)
            return 1;
        q.push({root,0});
        TreeNode *tmp=new TreeNode(INT_MAX);
        q.push({tmp,1});
        int c=0,dc=0,maxr=INT_MIN;
        vector<string> v;
        
        while(!q.empty()){
            pair<TreeNode*,int> p=q.front();
            q.pop();
            if(p.second==0){
                dc++;
                v.push_back(to_string(p.first->val));
                if(p.first->left)
                    q.push({p.first->left,0});
                else
                    q.push({new TreeNode(INT_MAX),2});
                
                if(p.first->right)
                    q.push({p.first->right,0});
                else
                    q.push({new TreeNode(INT_MAX),2});    
            }
            else if(p.second==1){
                if(dc==0)
                    break;
                else{
                    dc=0;
                    q.push(p);
                    int i,j;
                    for(i=v.size()-1;i>=0;i--){
                        if(v[i]!="null")
                            break;
                    }
                    for(j=0;j<v.size();j++){
                        if(v[j]!="null")
                            break;
                    }
                    maxr=max(maxr,i+1-j);
                    v.clear();
                    cout<<maxr<<endl;
                }
            }
            else if(p.second==2){
                v.push_back("null");
                q.push({new TreeNode(INT_MAX),2});
                q.push({new TreeNode(INT_MAX),2});
            }
        }
     return maxr;   
    }
};
