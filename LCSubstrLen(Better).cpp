#include<bits/stdc++.h>
using namespace std;
int lcsubstr(string str1,string str2){
    int res=0;
    int dp[str1.size()+1][str2.size()+1];
    for(int i=0;i<=str1.size();i++){
        for(int j=0;j<=str2.size();j++){
            if(i==0||j==0)
            dp[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            {dp[i][j]=1+dp[i-1][j-1];
            res=max(res,dp[i][j]);
            }
            else
            dp[i][j]=0;
        }
    }
    return res;
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    
    cout<<lcsubstr(str1,str2)<<endl;
}
