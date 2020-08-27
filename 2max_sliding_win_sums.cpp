#include <bits/stdc++.h>
using namespace std;

pair<pair<int, int>, int> maxWinSum(int n,int arr[],int s,int sp,int ep){
    int sum=0;
        int maxr;
        int st=sp,en=0;
    if(s>=ep-sp+1){
        for(int i=sp;i<=ep;i++)
        sum+=arr[i];
        maxr=sum;
        //cout<<sum<<endl;
        en=ep;
    }
    else{
    for(int i=sp;i<s;i++){
        sum+=arr[i];
    }
    en=sp+s-1;
    //cout<<sum<<" ";
    for(int i=sp+1;i<=ep-sp+1-s;i++){
        sum+=(arr[i+s-1]-arr[i-1]);
        //cout<<sum<<" ";
        if(maxr<sum){
            maxr=sum;
            st=i;
            en=i+s-1;
        }
      }
    }
    return make_pair(make_pair(st,en),maxr);
}
using namespace std;
int main(){
    int arr[]={1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;int l=4;
    pair<pair<int,int>,int> p1=maxWinSum(n,arr,k,0,n-1);
    pair<pair<int,int>,int> p2=maxWinSum(n,arr,l,0,p1.first.first-1);
    pair<pair<int,int>,int> p3=maxWinSum(n,arr,l,p1.first.second+1,n-1);
    
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second<<endl;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second<<endl;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second<<endl;
    
    int tsum=p1.second+max(p2.second,p3.second);
    
    cout<<tsum<<endl;
    
     p1=maxWinSum(n,arr,l,0,n-1);
     p2=maxWinSum(n,arr,k,0,p1.first.first-1);
     p3=maxWinSum(n,arr,k,p1.first.second+1,n-1);
    
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second<<endl;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second<<endl;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second<<endl;
    
    int tsum2=p1.second+max(p2.second,p3.second);
    
    cout<<tsum2<<endl;
    
    cout<<"Max: "<<max(tsum,tsum2)<<endl;
}
