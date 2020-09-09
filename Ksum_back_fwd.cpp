#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>k;
    int presum[n];
    presum[0]=arr[0];
    for(int i=1;i<n;i++)
    presum[i]=arr[i]+presum[i-1];
    int ans[n]={0};
    for(int i=0;i<n;i++){
        if(arr[i]*k>0)
        {
            ans[i]=presum[min(i+k,n-1)]-presum[i];
        }
        else{
            if(k>=i)
            ans[i]=presum[i-1];
            else
            ans[i]=presum[i-1]-presum[i-k-1];
        }
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
}
