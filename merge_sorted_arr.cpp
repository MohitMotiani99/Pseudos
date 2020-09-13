#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)cin>>b[i];
    
    int i=0,j=0,k=0;
    int arr[m+n];
    while(i<m && j<n){
        if(a[i]<b[j])
        arr[k++]=a[i++];
        else
        arr[k++]=b[j++];
    }
    while(i<m)
    arr[k++]=a[i++];
    
    while(j<n)
    arr[k++]=b[j++];
    
    for(int i=0;i<m+n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
