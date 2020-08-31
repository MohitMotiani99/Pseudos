#include<bits/stdc++.h>
using namespace std;
class Graph{
  public:
    int n;
    list<int> *adj;
    
    Graph(int ne){
        n=ne;
        adj=new list<int>[n];
    }
    void addEdge(int a,int b){
        adj[a].push_back(b);
    }
};
void topologicalSortUtil(Graph g,int n,int v,stack<int> &s,bool *visited){
    visited[v]=true;
    
    for(auto i=g.adj[v].begin();i!=g.adj[v].end();i++){
        if(!visited[*i])
        topologicalSortUtil(g,n,*i,s,visited);
    }
    
    s.push(v);
}
void topologicalSort(Graph g,int n){
    stack<int> s;
    bool *visited=new bool[n];
    for(int i=0;i<n;i++)visited[i]=false;
    
    for(int i=0;i<n;i++){
        if(visited[i]==false)
        topologicalSortUtil(g,n,i,s,visited);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    int n=6;
    Graph g(n);
    
    g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 
    
    topologicalSort(g,n);

}
