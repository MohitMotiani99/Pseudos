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
        q.push({root,1});
        TreeNode *tmp=new TreeNode(INT_MAX);
        q.push({tmp,-1});
        int c=0,dc=0,maxr=INT_MIN;
        int first=-1,last=-1;
        //vector<string> v;
        
        while(!q.empty()){
            pair<TreeNode*,int> p=q.front();
            q.pop();
            if(p.second!=-1){
                if(first==last &&first==-1)
                    first=last=p.second;
                else{
                    if(first>p.second)
                        first=p.second;
                    if(last<p.second)
                        last=p.second;
                }
                if(p.first->left)
                    q.push({p.first->left,2*p.second});
                if(p.first->right)
                    q.push({p.first->right,2*(p.second)+1});
                    
            }
            else if(p.second==-1){
                
                    //dc=0;
                    if(q.size()==0)
                    {
                        maxr=max(maxr,last-first+1);
                        break;
                    }
                    q.push(p);
                    maxr=max(maxr,last-first+1);
                    first=last=-1;
                    cout<<maxr<<endl;
                
            }
            
        }
     return maxr;   
    }
};
