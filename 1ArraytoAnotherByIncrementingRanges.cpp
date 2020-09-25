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
        int diff=0;
        int f=0;
        int c=0;
        for(int i=0;i<m;i++){
            if(a[i]>b[i]){
                if(a[i]>b[i])
                {
                    f=1;
                    cout<<"-1"<<endl;
                    break;
                }
            }
            else{
                if(diff==0)
                diff=b[i]-a[i];
                else if(b[i]-a[i]!=diff)
                {
                    c++;
                    diff=b[i]-a[i];
                }
            }
            
        }
        if(!f){
            if(diff>0)
            cout<<c+1<<endl;
            else
            cout<<c<<endl;
        }
    }
}
