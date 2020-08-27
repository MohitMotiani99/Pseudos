#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="abcab??bac?";
    int n=str.size();
    char x='a';
    if(n==1){
        if(str[0]=='?')
            cout<<"a"<<endl;
        else
            cout<<str<<endl;
    }
    else{
    for(int i=0;i<n;i++){
        if(str[i]=='?'){
            if(i==0){
                if(str[i+1]=='z')
                str[i]='a';
                else if(str[i+1]=='a')
                str[i]='b';
                else
                str[i]=str[i+1]+1;
            }
            else if(i==n-1){
                if(str[i-1]=='z')
                str[i]='a';
                else if(str[i-1]=='a')
                str[i]='b';
                else
                str[i]=str[i-1]+1;
            }
            else
            str[i]=max(str[i+1],str[i-1])+1;
        }
     }
     cout<<str<<endl;
    }
}
