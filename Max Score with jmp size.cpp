#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n,int k,int st){
    if(st>=n)
    return 0;
    
    int sum=INT_MIN;
    for(int i=st+1;i<=st+k;i++)
    {
        int ans=maxsum(arr,n,k,i);
        sum=max(sum,ans);
    }
    
    return sum+arr[st];
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    
    int ans[n];
    //memset(ans,INT_MIN,sizeof(ans));
    for(int i=0;i<n;i++)
    ans[i]=INT_MIN;
    ans[0]=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n)
            ans[i+j]=max(ans[i+j],ans[i]+arr[i+j]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    cout<<ans[n-1]<<endl;
    //cout<<maxsum(arr,n,k,0)<<endl;
}
