#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    int i,j,flag=0;
    for(i=0;i<n;i++){
        
            if(arr[i]%arr[0]!=0){
                flag=1;
                break;
            }
        
        
    }
    if(flag==0)
    cout<<sum/arr[0]<<endl;
    else{
        for(i=arr[0]-1;i>=1;i--){
            flag=0;
            for(j=0;j<n;j++){
                if(arr[j]%i!=0)
                {flag=1;break;}
            }
            //cout<<i<<" "<<flag<<endl;
            if(flag==0)
            break;
        }
        //cout<<i<<endl;
        cout<<sum/i<<endl;
    }
}
