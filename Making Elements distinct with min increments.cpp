#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    long sum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        {
            for(int j=i;j<n && arr[j]==arr[i-1];j++)
            arr[j]=1+arr[j-1];
        }
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
