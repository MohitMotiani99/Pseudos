#include <bits/stdc++.h>

using namespace std;
set<int> s;
int specialNodes(int n,vector<vector<int> > edges,vector<int> colors,int qn){
    
    queue<int> q;
    q.push(qn);
    s.insert(qn);
    while(!q.empty()){
        int a=q.front();
        q.pop();
        for(int i=0;i<n-1;i++){
            if(edges[i][0]==a && colors[edges[i][1]]==colors[qn] && s.find(edges[i][1])==s.end())
            {q.push(edges[i][1]);
                s.insert(edges[i][1]);
            }
        }
    }
    return s.size();
}
int main() {
    int n,i,j,q;
    cin>>n;
    vector<vector<int>> edges(n-1,vector<int>(2));
    vector<int> colors(n);
    for(i=0;i<n-1;i++){
        cin>>edges[i][0]>>edges[i][1];
    }
    cin>>q;
    vector<int> queries(q);
    for(i=0;i<n;i++)
    cin>>queries[i];
    
    vector<int> ans(q);
    for(i=0;i<q;i++)
    ans[i]=specialNodes(n,edges,colors,queries[i]);
    
    for(i=0;i<q;i++)
    cout<<ans[i]<<" ";
}
