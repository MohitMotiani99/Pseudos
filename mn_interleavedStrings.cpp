#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    int n=a.size();
    int m=b.size();
    if(n+m!=c.size())
    cout<<"NO"<<endl;
    else{
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)for(int j=0;j<=m;j++)dp[i][j]=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 && j==0)
                dp[i][j]=1;
                else if(i==0)
                {
                    if(b[j-1]==c[j-1])
                    dp[i][j]=dp[i][j-1];
                }
                else if(j==0)
                {
                    if(a[i-1]==c[i-1])
                    dp[i][j]=dp[i-1][j];
                }
                else if(a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1])
                dp[i][j]=dp[i-1][j];
                else if(a[i-1]!=c[i+j-1] && b[j-1]==c[i+j-1])
                dp[i][j]=dp[i][j-1];
                else if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1])
                dp[i][j]=dp[i-1][j]||dp[i][j-1];
            }
        }
        cout<<dp[n][m]<<endl;
    }
}
