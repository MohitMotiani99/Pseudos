#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int dp[n];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]>arr[j])
            dp[i]=max(dp[i],1+dp[j]);
        }
    }
    cout<<dp[n-1]<<endl;
}
