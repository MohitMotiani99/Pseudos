#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node **children;
    
    node(int x,int n){
        data=x;
        children=new node*[n];
        for(int i=0;i<n;i++){
            children[i]=NULL;
        }
    }
};
node* searchNode(node *root,int x,int n){
    queue<node* > q;
    q.push(root);
    while(!q.empty()){
        node *a=q.front();
        if(a->data==x)
        return a;
        q.pop();
        for(int i=0;i<n;i++){
            if(a->children[i]!=NULL)
            q.push(a->children[i]);
        }
    }
    return NULL;
}
node* makeGraph(int n,int e,vector<vector<int>> edges){
    node *root=NULL;
    for(int i=0;i<e;i++){
        if(root==NULL){
            node *temp=new node(edges[i][0],n);
            for(int j=0;j<n;j++){
                if(temp->children[j]==NULL)
                {temp->children[j]=new node(edges[i][1],n);break;}
            }
            root=temp;
        }
        else{
            node *temp=searchNode(root,edges[i][0],n);
            for(int j=0;j<n;j++){
                if(temp->children[j]==NULL)
                {temp->children[j]=new node(edges[i][1],n);break;}
            }
        }
        //
        /*
        cout<<root->data<<endl;
        for(int j=0;j<n;j++){
            if(root->children[j])
            cout<<root->children[j]->data<<" ";
        }
        cout<<endl;
        */
        //
    }
    return root;
}
void LevelOrder(node *root,int n){
    queue<node* > q;
    q.push(root);
    while(!q.empty()){
        node *a=q.front();
        cout<<a->data<<" ";
        q.pop();
        
        for(int i=0;i<n;i++){
            if(a->children[i]!=NULL)
            q.push(a->children[i]);
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> edges(e,vector<int>(2));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>edges[i][j];
        }
    }
    
    node *root=makeGraph(n,e,edges);
    //cout<<root->data<<endl;
    LevelOrder(root,n);
}
