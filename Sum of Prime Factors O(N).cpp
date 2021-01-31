#include<bits/stdc++.h>
using namespace std;
int sieve(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    
    for(int p=2;p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p)
            prime[i]=false;
        }
    }
    
    int sum=0;
    for(int p=2;p<=n;p++)
    {
        if(prime[p] && n%p==0)
        sum+=p;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sieve(n)<<endl;
}
