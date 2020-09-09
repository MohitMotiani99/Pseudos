#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxr=INT_MIN;
    int p1,p2;
    for(int i=0;i<n;i++){
        if(maxr<arr[i]){
            maxr=arr[i];
            p1=i;
        }
    }
    int minr=INT_MAX;
    int maxr2;
    for(int i=0;i<n;i++){
        if(i!=p1 && maxr-arr[i]<minr){
            minr=maxr-arr[i];
            p2=i;
        }
    }
    cout<<arr[p1]+arr[p2]<<endl;
}
