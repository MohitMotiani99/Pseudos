#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next,*prev;
    
    node(int x){
        data=x;
        next=prev=NULL;
    }
};
node* insert_at_End_DLL(node *head,int a){
    if(head==NULL){
        node* head=new node(a);
        return head;
    }
    else{
        node *temp=head;
        node* t1=new node(a);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=t1;
        t1->prev=temp;
    }
    return head;
}
node* delete_generic_DLL(node *head,int a){
    if(head->data==a){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        return head;
    }
    else{
        node *temp=head;
        while(temp->data!=a && temp!=NULL){
            temp=temp->next;
        }
        if(temp==NULL)
        return head;
        
        node *pre=temp->prev;
        pre->next=temp->next;
        temp->next->prev=pre;
        temp->next=NULL;
        temp->prev=NULL;
    }
    return head;

}

int main(){
    node* head=NULL;
    head=insert_at_End_DLL(head,1);
    head=insert_at_End_DLL(head,2);
    head=insert_at_End_DLL(head,3);
    head=insert_at_End_DLL(head,4);
    head=insert_at_End_DLL(head,5);
    head=insert_at_End_DLL(head,6);
    cout<<head->data<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    head=delete_generic_DLL(head,3);
     temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
