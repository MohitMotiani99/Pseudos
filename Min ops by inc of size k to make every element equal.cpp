#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n);
    
    
    int cnt=0;
    int f=1;
    for(int i=n-2;i>=0;i--){
        if((arr[n-1]-arr[i])%k==0)
        cnt+=((arr[n-1]-arr[i])/k);
        else
        {f=0;break;}
    }
    if(f)
    cout<<cnt<<endl;
    else
    cout<<"-1"<<endl;
}
