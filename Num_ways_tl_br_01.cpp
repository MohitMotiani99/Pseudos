#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
    int **dp=new int*[n];
    for(int i=0;i<n;i++)
    dp[i]=new int[m];
    
    if(arr[0][0]==1)
    dp[0][0]=1;
    else
    dp[0][0]=0;
    
    for(int i=1;i<m;i++){
        dp[0][i]=dp[0][i-1]&arr[0][i];
    }
    for(int i=1;i<m;i++){
        dp[i][0]=dp[i-1][0]&arr[i][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]==0)
            dp[i][j]=0;
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    cout<<dp[n-1][m-1]<<endl;
}
