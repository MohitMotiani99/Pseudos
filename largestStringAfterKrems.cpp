#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int k;
    cin>>str>>k;
    int alp[26]={0};
    for(int i=0;i<str.size();i++)
    alp[str[i]-'a']++;
    
    for(int i=0;i<26 && k>0;i++){
        if(alp[i]>0){
            if(k>=alp[i]){
                k=k-alp[i];
                alp[i]=0;
            }
            else{
                alp[i]=alp[i]-k;
                k=0;
            }
        }
    }
    //for(int i=0;i<26;i++)
    //cout<<alp[i]<<" ";
    
    //cout<<endl;
    for(int i=0;i<str.size();i++){
        if(alp[str[i]-'a']>0){
            cout<<str[i];
            alp[str[i]-'a']--;
        }
    }
}
