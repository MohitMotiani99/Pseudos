#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    cin>>n>>m>>c;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,set<int>> fr;
    map<int,int> sum;
    bool vis[n]={false};
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(fr.find(x)==fr.end())
            fr.insert({x,{y}});
        else
            fr[x].insert(y);
            
        if(fr.find(y)==fr.end())
            fr.insert({y,{x}});
        else
            fr[y].insert(x);
            
        
        if(sum.find(x)==sum.end())
            sum.insert({x,arr[x]+arr[y]});
        else
            sum[x]+=arr[y];
        
    }
    sort(sum.begin(),sum.end(),comp);
    for(auto i=sum.begin();i!=sum.end();i++){
        int sumer=i->second;
        for(auto j=fr[i->first].begin();j!=fr[i->first].end();j++){
            if(vis[*i]==true)
            sumer-=arr[*i];
        }
        if(vis[i->first]==true)
        if(c-(i->second)>=0)
        {cnt+=(1+fr[i->first].size());
        c=c-(i->second);
        for(auto j=fr[i->first].begin();j!=fr[i->first].end();j++){
            vis[*i]=true;
        }
    }
}
