#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    
    node(int x){
        data=x;
        next=NULL;
    }
};
bool loopll(node *head){
    node *slowptr=head,*fastptr=head;
    
    while(slowptr && slowptr->next && fastptr && fastptr->next && fastptr->next->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        
        if(slowptr==fastptr)
        return true;
    }
    return false;
}
int main(){
    //LL1
    node *head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=head->next;
    
    //LL2
    node *head2=new node(1);
    head2->next=new node(2);
    head2->next->next=new node(3);
    head2->next->next->next=new node(4);
    //head->next->next->next->next=head->next;
    
    if(loopll(head))
    cout<<"Loop in LL"<<endl;
    else
    cout<<"No Loop in LL"<<endl;
    
    if(loopll(head2))
    cout<<"Loop in LL"<<endl;
    else
    cout<<"No Loop in LL"<<endl;
}
