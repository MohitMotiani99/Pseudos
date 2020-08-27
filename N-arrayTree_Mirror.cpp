#include<bits/stdc++.h>
using namespace std;
bool mirrorBT()
int main(){
    cin>>n>>e;
    vector<int> v1[n+1],v2[n+1];
    int x,y;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        v1[x].push_back(y);
    }
    for(int i=0;i<e;i++){
        cin>>x>>y;
        v2[x].push_back(y);
    }
    for(int i=0;i<v2.size();i++)
    reverse(v2[i].begin(),v2[i].end());
    
    //v1,v2 size checkings also
    int flag=1;
    for(int i=0;i<v2.size()){
        if(v1[i]!=v2[i])
        {flag=0;break;}
    }
    if(flag)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
}
