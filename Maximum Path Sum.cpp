#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int par[n];
    int val[n];
    vector<int> adj[n];
    
    for(int i=0;i<n;i++){
        cin>>par[i];
        if(par[i]!=-1){
            adj[i].push_back(par[i]);
            adj[par[i]].push_back(i);
        }
        
    }
    
    for(int i=0;i<n;i++)cin>>val[i];
    
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        //cout<<i<<endl;
        queue<pair<int,int> > q;
        bool vis[n];
        memset(vis,false,sizeof(vis));
        q.push({i,val[i]});
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            vis[p.first]=true;
            
            sum=max(sum,p.second);
            //cout<<sum<<"  ";
            for(int j=0;j<adj[p.first].size();j++){
                if(!vis[adj[p.first][j]])
                q.push({adj[p.first][j],p.second+val[adj[p.first][j]]});
            }
        }
        //cout<<endl;
    }
    cout<<sum<<endl;
}
