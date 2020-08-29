#include<bits/stdc++.h>
using namespace std;
unsigned long long power(int m,int n){
    if(n==1)
    return m;
    
    if(n%2==0){
        unsigned long long a=power(m,n/2);
        return a*a;
    }
    else{
        unsigned long long a=power(m,(n-1)/2);
        return a*a*m;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
}
