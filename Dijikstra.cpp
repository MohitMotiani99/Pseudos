#include<bits/stdc++.h>
using namespace std;
#define V 9 
void dijkstra(int graph[V][V],int src){
	int dist[V];
	for(i=0;i<V;i++)
	dist[V]=INT_MAX;
	
	int parent[V]={-1};
	
	dist[0]=0;
	bool spt[V];
	for(i=0;i<V;i++)
	spt[V]=false;
	
	while(!allVisited(spt,V)){
		int minNodeinSPT=minNode(spt,V,dist);
		spt[minNodeinSPT]=true;
		for(i=0;i<V;i++){
			if(i!=minNodeinSPT && graph[minNodeinSPT][i]!=0 && spt[i]==false && graph[minNodeinSPT][i]+dist[minNodeinSPT]<=dist[i])
			dist[i]=graph[minNodeinSPT][i]+dist[minNodeinSPT];
			parent[i]=minNodeinSPT;
		}
		
	}
	for(i=0;i<V;i++){
		cout<<"Node number: "<<i<<" Dist: "<<dist[i]<<endl;
	}
}
int main(){
	    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0); 
  
    return 0; 

}
