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
void LevelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
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
    
    LevelOrderTraversal(root);

}
