#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int lis[n];
    for(int i=0;i<n;i++)lis[i]=1;
    //lis[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && lis[j]+1>lis[i])
            lis[i]=lis[j]+1;
        }
    }
    int lds[n];
    for(int i=0;i<n;i++)lds[i]=1;
    //lds[n-1]=1;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] && lds[j]+1>lds[i])
            lds[i]=lds[j]+1;
        }
    }
    for(int i=0;i<n;i++)
    cout<<lis[i]<<" "<<lds[i]<<endl;
    map<int,int> m;
    
    int maxr=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(lis[i]==lds[j]){
                if(i==j)
                maxr=max(maxr,lis[i]+lds[j]-1);
                else if(j>i)
                maxr=max(maxr,lis[i]+lds[j]);
            }
            
        }
    }
    cout<<maxr<<endl;
}
