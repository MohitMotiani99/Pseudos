#include<bits/stdc++.h>
using namespace std;
int mpi(string str,int l,int h,int **dp){
    //cout<<"h"<<endl;
    if(l>h)
    {
        dp[l][h]=INT_MAX;
        return INT_MAX;
    }
        //cout<<l<<" "<<h<<" "<<dp[l][h]<<endl;

    if(l==h)
    {
        dp[l][h]=0;
        return 0;
    }
    if(l==h-1)
    {
        dp[l][h]=(str[l]==str[h])?0:1;
        return dp[l][h];
    }
    if(dp[l][h]!=-1)
    return dp[l][h];
    
        //cout<<l<<" "<<h<<" "<<dp[l][h]<<endl;
    dp[l][h]=(str[l]==str[h])?(mpi(str,l+1,h-1,dp)):(1+min(mpi(str,l+1,h,dp),
    mpi(str,l,h-1,dp)));
    //cout<<l<<" "<<h<<" "<<dp[l][h]<<endl;
    return dp[l][h];
}
int main()
 {
     int t;
     string str;
     cin>>t;
     while(t--){
     cin>>str;
     //cout<<"h"<<endl;
     int **dp=new int*[str.size()];
     for(int i=0;i<str.size();i++)
     dp[i]=new int[str.size()];
     
     //memset(dp,-1,sizeof(dp));
     for(int i=0;i<str.size();i++){
        for(int j=0;j<str.size();j++)
            dp[i][j]=-1;
     }
     
     cout<<mpi(str,0,str.size()-1,dp)<<endl;
     }
	//code
	return 0;
}
