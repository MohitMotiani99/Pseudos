#include<bits/stdc++.h>
using namespace std;
struct edge{
	int src,dist,wt;
};
void FloyydWarshal(int **graph,int v){
	for(k=0;k<v;k++){//k is intermediate node
		for(i=0;i<v;i++){
			for(j=0;j<v;j++){
				if(graph[i][j]>graph[i][k]+graph[k][j])
				graph[i][j]=graph[i][k]+graph[k][j];
			}
		}
	}
}
int main(){
		cin>>v>>e;
	edge * edges=new edge[e];//directed graph
	for(i=0;i<e;i++){
		cin>>edges[i].src>>edges[i].dist>>edges[i].wt;
	}
	int **graph=new int*[v];
	for(i=0;i<v;i++)
	graph[i]=new int[v];
	
	for(i=0;i<v;i++)
	for(j=0;j<v;j++)
	graph[i][j]=INT_MAX;
	
	for(i=0;i<v;i++)
	graph[i][i]=0;
	
	
	for(i=0;i<e;i++){
		graph[edges[i].src][edges[i].dist]=edges[i].wt;
	}
	FloyydWarshal(graph,v);
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			cout<<"From Node number: "<<i<<" To Node Number: "<<j<<" Dist: "<<graph[i][j]<<endl;	
		}
	}
}
