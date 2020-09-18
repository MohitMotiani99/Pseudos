#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size(),n=s2.size();
    int dp[m+1][n+1];
    int res=0;
    int end=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                if(res<dp[i][j]){
                    res=dp[i][j];
                    end=i-1;
                }
            }
            else
            dp[i][j]=0;
        }
    }
    //cout<<end<<" "<<res<<endl;
    cout<<s1.substr(end+1-res,res)<<endl;
}
