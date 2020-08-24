#include <bits/stdc++.h>

using namespace std;
struct node{
  int data;
  node *left,*right;
  
  node(int x){
      data=x;
      left=right=NULL;
  }
};
int* InOrder(node *root,int n){
    int *arr=new int[n];
    stack<node* > s;
    node *curr=root;
    int i=0;
    while(curr!=NULL|| !s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        arr[i++]=curr->data;
        curr=curr->right;
    }
    return arr;
}
int main() {
    node *root=new node(0);
    root->left=new node(1);
    root->right=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    
    int *arr=InOrder(root,5);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}
