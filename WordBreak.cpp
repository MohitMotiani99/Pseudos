#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cin>>str;
        for(int i=0;i<n;i++){
            int a=str.find(arr[i]);
            if(a!=string::npos){
                str.erase(a,arr[i].size());
            }
            if(str.size()==0)
            break;
        }
        if(str.size()==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
