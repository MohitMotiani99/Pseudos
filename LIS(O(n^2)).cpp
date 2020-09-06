#include<iostream>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)cin>>arr[i];
         int dp[n];
         for(int i=0;i<n;i++)
         dp[i]=1;
         //dp[0]=1;
         for(int i=1;i<n;i++){
             for(int j=0;j<i;j++){
                 if(arr[i]>arr[j])
                 dp[i]=max(dp[i],1+dp[j]);
             }
         }
         int maxr=dp[0];
         for(int i=1;i<n;i++){
             maxr=max(dp[i],maxr);
         }
         cout<<maxr<<endl;
     }
	//code
	return 0;
}
