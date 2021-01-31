#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++;
    
    int cnt=0;
    sort(arr,arr+n);
    while(1){
        // for(int i=0;i<n-1;i++){
        //     m[arr[i]]--;
        //     arr[i]++;
        //     m[arr[i]]++;
        // }
        // int f=0;
        // for(auto i=m.begin();i!=m.end();i++){
        //     if((i->second)>0 && f==0)
        //     f=1;
        //     else if((i->second)>0 && f==1)
        //     {f=2;break;}
        // }
        // cnt++;
        // if(f==1)
        // break;
        
        // sort(arr,arr+n);
        
        m[arr[n-1]]--;
        arr[n-1]--;
        m[arr[n-1]]++;
        
        int f=0;
        for(auto i=m.begin();i!=m.end();i++){
            if((i->second)>0 && f==0)
            f=1;
            else if((i->second)>0 && f==1)
            {f=2;break;}
        }
        cnt++;
        if(f==1)
        break;
        
        sort(arr,arr+n);
    }
    
    cout<<cnt<<endl;
}
