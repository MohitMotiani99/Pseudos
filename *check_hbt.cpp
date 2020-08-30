#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *l,*r;
  
  node(int x){
      data=x;
      l=r=NULL;
  }
};
int h2(node *root){
    if(root==NULL)
    return 0;
    
    return 1+max(h2(root->l),h2(root->r));
}
bool isBalanced(node* root){
    if(root==NULL)
    return true;
    
    return ((h2(root->l)-h2(root->r)<=1) && isBalanced(root->l) && isBalanced(root->r));
}
int main(){
    node *root=new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->l->l=new node(4);
    root->l->l->l=new node(5);
    root->r->r=new node(6);
    
    cout<<isBalanced(root)<<endl;
}
