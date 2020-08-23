#include<bits/stdc++.h>
using namespace std;
struct node{
    int d;
    node *left,*right;
    
    node(int data){
        d=data;
        left=right=NULL;
    }
};
void LevelOrderTraversal(node *root,int sum[]){
    queue<node*> q;
    q.push(root);
    node *limit=new node(-1);
    q.push(limit);
    int i=0;
    while(!q.empty()){
        if(q.front()->d==-1){
            node *t=q.front();
            q.pop();
            i++;
            if(q.size()!=0)
            q.push(t);
            else
            break;
        }
        node *temp=q.front();
        sum[i]+=temp->d;
        cout<<temp->d<<" ";
        q.pop();
        if(temp->left)
        q.push(temp->left);
        
        if(temp->right)
        q.push(temp->right);
        
    }
}
int main(){
    node *root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5); 
    
    int n=5;
    int sum[n]={0};
    LevelOrderTraversal(root,sum);
    cout<<endl;
    for(int i=0;i<n;i++)cout<<sum[i]<<" ";
}
