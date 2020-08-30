void io(Node* root,vector<int> &in){
    if(root==NULL)
    return;
    
    io(root->left,in);
    in.push_back(root->data);
    io(root->right,in);
}
Node* search(Node* root,int x){
    if(root==NULL)
    return NULL;
    
    if(root->data==x)
    return root;
    
    Node *t1=search(root->left,x);
    if(t1)return t1;
    
    t1=search(root->right,x);
    if(t1)return t1;
}
struct Node *correctBST( struct Node* root )
{
    vector<int> in,actin;
    io(root,in);
    actin=in;
    sort(actin.begin(),actin.end());
    int flag=0;
    int a,b;
    //for(int i=0;i<in.size();i++)
    //cout<<in[i]<<" "<<actin[i]<<"    ";
    //cout<<endl;
    for(int i=0;i<in.size();i++){
        if(in[i]!=actin[i] && flag==0)
        {a=in[i];flag=1;}
        
        else if(in[i]!=actin[i] && flag==1)
        {b=in[i];break;}
        
    }
    //cout<<a<<" "<<b<<endl;
    Node* t1=search(root,a);
    Node* t2=search(root,b);
    
    //cout<<t1->data<<" "<<t2->data<<endl;
    swap(t1->data,t2->data);
    //cout<<t1->data<<" "<<t2->data<<endl;
    return root;
    // add code here.
}
