#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++;
    
    int cnt=0;
    int maxi=INT_MIN;
    int ans;
    for(auto i=m.begin();i!=m.end();i++){
            if(((i->second)>maxi) || (((i->second)==maxi) && (i->first)<ans )){
                maxi=i->second;
                ans=i->first;
            }
        }
    sort(arr,arr+n);
    while(1){
        cout<<"Before: "<<ans<<" "<<maxi<<endl;
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
        arr[n-1]-=k;
        m[arr[n-1]]++;
        
        for(int i=0;i<n-1;i++){
            m[arr[i]]--;
            arr[i]++;
            m[arr[i]]++;
        }
        
        //int f=0;
        int maxi2=INT_MIN,ans2;
        for(auto i=m.begin();i!=m.end();i++){
            if(((i->second)>maxi2) || (((i->second)==maxi2) && (i->first)<ans2 )){
                maxi2=i->second;
                ans2=i->first;
            }
        }
        //cnt++;
        // if(f==1)
        // break;
        
        cout<<"After: "<<ans<<" "<<maxi<<endl<<endl;
        
        if(maxi2<maxi)
        break;
        else if(maxi2>maxi)
        maxi=maxi2,ans=ans2;
        else if(ans2<ans)
        ans=ans2;
        
        sort(arr,arr+n);
    }
    
    cout<<ans<<endl;
}
