#include<bits/stdc++.h>
using namespace std;
long long sump(int arr[],int m,int n){
    if(n==0)
    return 0;
    
    
    long long ans=INT_MAX;
    for(int i=0;i<m;i++)
    {
        if(n>=arr[i])
        ans=min(ans,1+sump(arr,m,n-arr[i]));
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    
    for(int i=0;i<m;i++)cin>>arr[i];
    //int c=0;
    
    long long dp[n+1];
    for(int i=0;i<=n;i++)dp[i]=INT_MAX;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(arr[j]<=i)
            dp[i]=min(dp[i],1+dp[i-arr[j]]);
        }
    }
    
    
    //int ans=sump(arr,m,n);
    
    int ans=dp[n];
    
    
    if(ans==INT_MAX)
    cout<<"-1"<<endl;
    else
    cout<<ans<<endl;
}
