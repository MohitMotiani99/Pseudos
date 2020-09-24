#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cin>>m>>k;
    while(m--){
        n=n-1;
        for(int i=0;i<n;i++)
        arr[i]=arr[i]^arr[i+1];
        
        
    }
    if(k>n-1)
    cout<<"-1"<<endl;
    else
    cout<<arr[k]<<endl;
}
