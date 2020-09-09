#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return (a.second<b.second);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>dep[i];
    sort(arr,arr+n);
    sort(dep,dep+n);
    
    int i=0,j=0,ans=0,res=INT_MIN;
    
    while(i<n && j<n){
        if(arr[i]<dep[j]){
            ans++;
            i++;
        }
        else{
            ans--;
            j++;
        }
        //cout<<res<<endl;
        res=max(res,ans);
    }
    cout<<res<<endl;
}
