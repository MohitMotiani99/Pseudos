#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,k;
    string str;
    cin>>n>>x>>k;
    cin>>str;
    vector<string> v;
    for(int i=0;i<n;i++){
        int len=min(n-i,x);
        v.push_back(str.substr(i,len));
        i+=(len-1);
    }
    int prod=1;
    for(int i=0;i<v.size();i++){
        sort(v[i].begin(),v[i].end());
        //cout<<v[i]<<" ";
        prod*=v[i].size();
    }
    //cout<<endl;
    string ans="";
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1)
        {
            if(k!=0)
            ans+=v[i][k-1];
            else
            ans+=v[i][v[i].size()-1];
        }
        
        else{
            //cout<<k<<endl;
            prod=prod/v[i].size();
            if(k!=0 && k%prod!=0)
            ans+=v[i][k/prod];
            else if(k!=0 && k%prod==0)
            ans+=v[i][k/prod-1];
            else
            ans+=v[i][v[i].size()-1];
            
            if(k!=0)
            k=k%prod;
        }
    }
    cout<<ans<<endl;
}
