#include<bits/stdc++.h>
using namespace std;
int finds(string s,int st){
    int cnt=0;
    for(int i=0,j=st;i<s.size() && j<s.size();i++,j++){
        if(s[i]==s[j])
        cnt++;
        else
        return cnt;
    }
    return cnt;
}
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        int a=finds(s,i);
        //cout<<a<<endl;
        sum+=a;
    }
    cout<<sum<<endl;
}
