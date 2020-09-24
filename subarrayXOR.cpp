#include<bits/stdc++.h>
using namespace std;
int fnot(int x){
    string str="";
    while(x!=0){
        str+=(x%2 + '0');
        x/=2;
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        str[i]=(str[i]=='0')?'1':'0';
    }
    int s=0;
    for(int i=0;i<str.size();i++){
        s+=((str[i]-'0')*pow(2,i));
    }
    return s;
}
int main(){
    int n,m,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int xarr[n];
    xarr[0]=arr[0];
    for(int i=1;i<n;i++){
        xarr[i]=arr[i]^xarr[i-1];
    }
    cout<<xarr[2]^xarr[0]<<endl;
}
