#include<bits/stdc++.h>
using namespace std;
int lcs(string a,string b){
    int dp[a.size()+1][b.size()+1];
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(a[i-1]==b[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[a.size()][b.size()];
}
int main(){
    int t,x,i;
    string str;
    cin>>t;
    while(t--){
        string ans;
        cin>>x;
        string arr[x];
        for(i=0;i<x;i++)
        cin>>arr[i];
        
        cin>>str;
        int maxr=INT_MIN;
        for(i=0;i<x;i++){
            int a=lcs(arr[i],str);
            if(maxr<a){
                maxr=a;
                ans=arr[i];
            }
        }
        cout<<ans<<endl;
    }
}
