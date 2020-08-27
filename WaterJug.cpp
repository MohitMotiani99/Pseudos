#include<bits/stdc++.h>
//typedef pair<int,int> pii;
using namespace std;
int main(){
    int m,n,d;
    m=4;n=3;d=2;
    queue<pair<int,int>> q;
    q.push({0,0});
    int c=0;
    set<pair<int,int>> s;
    s.insert({0,0});
    while(!q.empty()){
        pair<int,int> p=q.front();
        cout<<p.first<<" "<<p.second<<endl;
        q.pop();
        if(p.first==d || p.second==d){
            //cout<<"H"<<endl;
            //cout<<c<<endl;
            break;
        }
        else{
            c++;
            pair<int,int> d;
            if(p.first>0){
                d.first=0;
                d.second=p.second;
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
            if(p.second>0){
                d.first=p.first;
                d.second=0;
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
            if(p.first<m){
                d.first=m;
                d.second=p.second;
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
            if(p.second<n){
                d.first=p.first;
                d.second=n;
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
            if(p.first>=0 && p.first<=m && p.second>0){
                d.first=min(p.first+p.second,m);
                d.second=max(0,p.second-(m-p.first));
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
            if(p.second>=0 && p.second<=n && p.first>0){
                d.first=max(0,p.first-(n-p.second));
                d.second=min(n,p.second+p.first);
                if(s.find(d)==s.end()){
                q.push(d);
                s.insert(d);
                }
            }
        }
    }
    cout<<endl<<c<<endl;
}
