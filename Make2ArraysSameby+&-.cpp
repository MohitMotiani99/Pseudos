#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)cin>>a[i];
    
    for(int i=0;i<n;i++)cin>>b[i];
    
    
    if(m!=n)
    cout<<"-1"<<endl;
    else{
        int c=0;
        sort(a,a+m);
        sort(b,b+n);
        
        for(int i=0;i<m;i++)
        c+=abs(a[i]-b[i]);
        
        cout<<c<<endl;
    }
}
