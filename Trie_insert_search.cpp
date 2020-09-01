#include <bits/stdc++.h>

using namespace std;
const int size=26;
struct TrieNode{
  TrieNode *children[size];
  bool EOW;
};
TrieNode* getNode(){
    TrieNode *pnode=new TrieNode;
    pnode->EOW=false;
    
    for(int i=0;i<size;i++)
        pnode->children[i]=NULL;
        
    return pnode;
}
void insert(TrieNode *root,string str){
    TrieNode *pcrawl=root;
    for(int i=0;i<str.length();i++){
        if(!pcrawl->children[str[i]-'a'])
            pcrawl->children[str[i]-'a']=getNode();
        
        pcrawl=pcrawl->children[str[i]-'a'];
    }
    pcrawl->EOW=true;
}
bool search(TrieNode *root,string str){
    TrieNode *pcrawl=root;
    for(int i=0;i<str.length();i++){
        if(!pcrawl->children[str[i]-'a'])
            return false;
        
        pcrawl=pcrawl->children[str[i]-'a'];
    }
    
    return (pcrawl!=NULL && pcrawl->EOW);
}
int main() {
    string keys[] = {"these", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]);
    
    TrieNode* root=getNode();
    
    for(int i=0;i<n;i++)
    insert(root,keys[i]);
    
    search(root,"the")?cout<<"Yes"<<endl:cout<<"No"<<endl;
    search(root,"these")?cout<<"Yes"<<endl:cout<<"No"<<endl;

}
