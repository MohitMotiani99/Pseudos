#include<bits/stdc++.h>
using namespace std;
int lcs2(string a,string b){
    int p1=0,p2=0;
    while(p2<b.size()){
        if(a[p1]==b[p2])
        p1++;
        
        p2++;
    }
    if(p1==a.size())
    return p1;
    else
    return 0;
}

int main(){
    int t,x,i;
    string str;
    cin>>t;
    while(t--){
        string ans;
        cin>>x;
        string arr[x];
        for(i=0;i<x;i++)
        cin>>arr[i];
        
        cin>>str;
        int maxr=INT_MIN;
        for(i=0;i<x;i++){
            int a=lcs2(arr[i],str);
            if(maxr<a){
                maxr=a;
                ans=arr[i];
            }
        }
        cout<<ans<<endl;
    }
}
