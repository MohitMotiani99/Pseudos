#include <bits/stdc++.h>
using namespace std;
vector<int> dfs(int n,vector<int>& gr[];int s){
    vector<int> out;
    //out.push_back(0);
    stack<int> s;
    s.push(0);
    while(!s.empty()){
        int a=s.top();
        s.pop();
        out.push_back(a);
        for(int i=0;i<gr[a].size();i++){
            
        }
    }
}
int main(){
    cin>>n;
    vector<int> gr[n]
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        gr[x].push_back(y);
    }
    cin>>a>>b;
    vector<int> v1=dfs(n,gr,a);
    vector<int> v2=dfs(n,gr,b);
    
    int ans=-1;
    for(int i=0;i<min(v1.size(),v2.size());i++){
        if(v1[i]==v2[i])
        ans=v1[i];
    }
    cout<<ans<<endl;
}
