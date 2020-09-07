#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>s;
    int presum[n];
    presum[0]=arr[0];
    for(int i=1;i<n;i++)presum[i]=arr[i]+presum[i-1];
    
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==0 && presum[j]<=s)
            {c++;
            cout<<i<<" "<<j<<endl;}
            else if(i>0 && presum[j]-presum[i-1]<=s)
            {c++;
            cout<<i<<" "<<j<<endl;}
        }
    }
    cout<<c<<endl;
    double f=((float)c)/((n*(n+1))/2);
    cout<<"Prob: "<<setprecision(7)<<f<<endl;
}
