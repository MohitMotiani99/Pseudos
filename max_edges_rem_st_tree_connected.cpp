#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e,x,y;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    cin>>x>>y;
    
    if(e<n-1)
    cout<<"0"<<endl;
    else
    cout<<e-n+1<<endl;
}
