#include<bits/stdc++.h>
using namespace std;
struct edge{
	int src,dist,wt;
};
int BellManFord(int dist[],edge *edges,int v,int e){
	for(i=0;i<v-1;i++){
		for(j=0;j<e;j++){
			if(dist[edges[j].dist]!=INT_MAX && dist[edges[j].dist]>dist[edges[j].src]+edges[j].wt)//dist[edges[j].dist]!=INT_MAX imp bcoz dont want to check unprocessed edges
			dist[edges[j].dist]=dist[edges[j].src]+edges[j].wt;
		}
	}
	for(j=0;j<e;j++){
			if(dist[edges[j].dist]>dist[edges[j].src]+edges[j].wt)
			return -1;
	}
	return 0;
}
int main(){
	cin>>v>>e;
	edge * edges=new edge[e];
	for(i=0;i<e;i++){
		cin>>edges[i].src>>edges[i].dist>>edges[i].wt;
	}
	int dist[v]={INT_MAX};
	dist[0]=0;
	int res=BellManFord(dist,edges,v,e);
	if(res==-1)
	cout<<"Neg Cycle Found"<<endl;
	else{
		for(i=0;i<v;i++){
			cout<<"Node number: "<<i<<" Dist: "<<dist[i]<<endl;
		}
	}
}
