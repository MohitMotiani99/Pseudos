#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,char> a,pair<int,char> b){
    return a.first<b.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],d[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>d[i];
    sort(a,a+n);
    sort(d,d+n);
    
    int i=0,j=0;
    int c=0,maxr=INT_MIN;
    while(i<n && j<n){
        if(a[i]<=d[j])
        {c++;i++;}
        else if(a[i]>d[j])
        {c--;j++;}
        
        maxr=max(maxr,c);
    }
    cout<<maxr<<endl;
    
    }
}
