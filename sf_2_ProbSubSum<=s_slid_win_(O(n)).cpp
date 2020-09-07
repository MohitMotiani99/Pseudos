#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,su;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>su;
    int s=0,e=0;
    int sum=arr[0];
    int c=0;
    
    while(s<n && e<n){
        if(sum<=su){
        
        e++;
        
        if(s<=e)
        c+=(e-s);
        
        if(e<n)
        sum+=arr[e];
        }
        else{
            sum-=arr[s];
            s++;
        }
    }
    cout<<c<<endl;
}
