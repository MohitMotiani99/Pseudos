#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++;
    
    long sum=0;
    for(int i=n-1;i>=0;i--){
        if(m[arr[i]]>1){
            int orig=arr[i];
            
            while(m[arr[i]]>=1)
            arr[i]++;
            if(m[arr[i]]==0)
            m[arr[i]]++;
            
            m[orig]--;
        }
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
