#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main(){
    int n,m,a,b;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    queue<pair<int,int> > q;
    q.push({0,0});
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    v[i]=make_pair(i,INT_MAX);
    
    bool vis[n];
    memset(vis,false,sizeof(vis));
    
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        vis[p.first]=true;
        
        v[p.first].second=min(v[p.first].second,p.second);
        
        for(int i=0;i<adj[p.first].size();i++){
            if(vis[adj[p.first][i]]==false)
            q.push({adj[p.first][i],p.second+1});
        }
    }
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<n;i++)
    cout<<v[i].first<<" ";
    cout<<endl;
    
}
