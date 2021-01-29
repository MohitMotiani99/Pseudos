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
    /*
    long long dp[n+1];
    for(int i=0;i<=n;i++)dp[i]=0;
    dp[0]=1;
    for(int i=0;i<=n;i++)cout<<dp[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        for(int j=0;j<m;j++){
            if(arr[j]<=i){
            dp[i]+=(dp[i-arr[j]]);
            cout<<j<<" "<<dp[i]<<endl;
            }
        }
        cout<<"Final "<<dp[i]<<endl;
    }
    
    //int ans=sump(arr,m,n);
    
    int ans=dp[n];
    */
    
    long dp[m+1][n+1];
    for(int i=0;i<m;i++)for(int j=0;j<=n;j++)dp[i][j]=0;
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(j==0)
            dp[i][j]=1;
            else if(i==0)
            dp[i][j]=0;
            else if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
            else
            dp[i][j]=dp[i-1][j];
            
            cout<<dp[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    
    // if(ans==INT_MAX)
    // cout<<"-1"<<endl;
    // else
    cout<<dp[m][n]<<endl;
}
