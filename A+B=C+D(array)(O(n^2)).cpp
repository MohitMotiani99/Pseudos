#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m.find(arr[i]+arr[j])==m.end())
            m.insert({arr[i]+arr[j],{i,j}});
            else{
                auto it=m.find(arr[i]+arr[j]);
                if(i!=it->second.first && j!=it->second.second)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[it->second.first]<<" "<<arr[it->second.second]<<endl;
                    break;
                }
            }
        }
    }
    
}
