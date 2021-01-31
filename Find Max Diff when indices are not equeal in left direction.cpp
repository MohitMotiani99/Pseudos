#include<bits/stdc++.h>
using namespace std;
int findMaxDiff(int A[], int n)
{
    pair<int,int> pmax[n];
    pmax[0]={A[0],0};
    pair<int,int> pmin[n];
    pmin[0]={A[0],0};
    
    for(int i=1;i<n;i++)
    {
        if(A[i]>pmax[i-1].first){
            pmax[i]={A[i],i};
        }
        else{
            pmax[i]={pmax[i-1].first,pmax[i-1].second};
        }
        
        if(A[i]<pmin[i-1].first){
            pmin[i]={A[i],i};
        }
        else{
            pmin[i]={pmin[i-1].first,pmin[i-1].second};
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<pmax[i].first<<"  "<<pmax[i].second<<endl;
    cout<<endl<<endl;
    
    for(int i=0;i<n;i++)
    cout<<pmin[i].first<<"  "<<pmin[i].second<<endl;
    cout<<endl<<endl;
    
    
    
    int i=n-1,j=n-1;
    if(pmax[i].first==pmin[j].first)
    return 0;
    
    while(j>=1){
        if(pmax[i].second>pmin[j].second)
        break;
        else
        j--;
    }
    int ans1=0;
    if(pmax[i].second>pmin[j].second)
    ans1=pmax[i].first-pmin[j].first;
    
    i=n-1;j=n-1;
    while(i>=1){
        if(pmax[i].second>pmin[j].second)
        break;
        else
        i--;
    }
    int ans2=0;
    if(pmax[i].second>pmin[j].second)
    ans2=pmax[i].first-pmin[j].first;
    
    
    cout<<ans1<<" "<<ans2<<endl;
    
    return max(ans1,ans2);
    
  //Your code here
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   
   cout<<findMaxDiff(arr,n)<<endl;
}
