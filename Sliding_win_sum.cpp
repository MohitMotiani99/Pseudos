#include <bits/stdc++.h>

using namespace std;
int main(){
    int arr[]={1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int sum=0;
    if(k>=n){
        for(int i=0;i<n;i++)
        sum+=arr[i];
        
        cout<<sum<<endl;
    }
    else{
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    cout<<sum<<" ";
    for(int i=1;i<=n-k;i++){
        sum+=(arr[i+k-1]-arr[i-1]);
        cout<<sum<<" ";
    }
    }
}
