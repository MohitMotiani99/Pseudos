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
node *searchNode(node *root,int val){
    node *t1;
    if(root==NULL)
    return NULL;
    
    if(root->d==val)
    return root;
    
    if(root->left ){ t1=searchNode(root->left,val);
    return t1;
    }
    
    if(root->right){ t1=searchNode(root->right,val);
    return t1;
    }
    
    return NULL;
}
node* addEdge(node *root,int x,int y){
    if(root==NULL)
    {
        root=new node(x);
        node *temp=new node(y);
        if(!root->left)
        root->left=temp;
        else if(!root->right)
        root->right=temp;
    }
    else{
        node *temp1=searchNode(root,x);
        
        node *temp=new node(y);
        if(!temp1->left)
        temp1->left=temp;
        else if(!temp1->right)
        temp1->right=temp;
        
    }
    return root;
}
int main(){
    int n,e,x,y;
    cin>>n>>e;
    int arr[n],i,j;
    for(i=0;i<n;i++)cin>>arr[i];
    node *root=NULL;
    for(i=0;i<e;i++){
        cin>>x>>y;
        root=addEdge(root,arr[x],arr[y]);
        //cout<<"H"<<endl;
    }
    //if(!root)
    //cout<<"yo"<<endl;
    int sum[n]={0};
    LevelOrderTraversal(root,sum);
    cout<<endl;
    for(int i=0;i<n;i++)cout<<sum[i]<<" ";
}
