#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n,x,y;
    cin>>n;
    vector<pair<int,int>> t,ans;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        t.push_back({x,y});
    }
    sort(t.begin(),t.end(),comp);
    
    ans.push_back(t[0]);
    int j=0;
    for(int i=1;i<n;i++){
        if(t[i].first<ans[j].second){
            ans[j].second=t[i].second;
        }
        else{
            ans.push_back(t[i]);
            j++;
        }
    }
    int maxr=ans[0].second-ans[0].first;
    for(int i=0;i<ans.size();i++){
        maxr=max(maxr,ans[i].second-ans[i].first);
    }
    cout<<maxr<<endl;
}
