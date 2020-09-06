#include<bits/stdc++.h>
using namespace std;
int lcs(string str,string str2,int **dp){
    cout<<str.size()<<endl;
    //cout<<"h"<<endl;
    for(int i=0;i<=str.size();i++){
        for(int j=0;j<=str.size();j++){
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(str[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
            cout<<dp[i][j]<<endl;
        }
        //cout<<"h"<<endl;
    }
    cout<<"x"<<endl;
    return dp[str.size()][str.size()];
}
int main(){
    string str,strr;
    cin>>str;
    strr=str;
    reverse(strr.begin(),strr.end());
    cout<<strr<<endl;
    string ans="";
    
    int **dp=new int*[str.size()+1];
    for(int i=0;i<str.size();i++)
    dp[i]=new int[str.size()+1];
    
    //cout<<"h"<<endl;
    
    int a=lcs(str,strr,dp);
    
    cout<<"h"<<endl;
    
    int i=str.size()-1;
    int j=i;
    cout<<"h"<<endl;
    while(i>=0 && j>=0){
        if(str[i]==strr[j])
        {ans+=str[i];i--;j--;}
        else if(dp[i-1][j]>dp[i][j-1])
        i--;
        else
        j--;
    }
    cout<<str.size()-a<<endl;
    reverse(ans.begin(),ans.end());
}
