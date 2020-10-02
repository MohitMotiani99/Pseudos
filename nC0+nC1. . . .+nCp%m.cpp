/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p;
    cin>>t;
    long mod =pow(10,9)+7;
    while(t--){
        cin>>n>>p;
        unsigned  long long fact[n+1];
        fact[0]=fact[1]=1;
        for(int i=2;i<=n;i++)
        fact[i]=((i%mod)*(fact[i-1]%mod)%mod);
        
        for(int i=0;i<=n;i++)
        cout<<i<<"    "<<fact[i]<<endl;
        cout<<endl;
    
        unsigned long long sum=0;
        for(int i=0;i<=p;i++){
        //cout<<(fact[n]/((fact[i]*fact[n-i])%mod)%mod)<<"   ";
        if( (((fact[i]%mod)*(fact[n-i]%mod))%mod)!=0  )
        sum=(sum%mod+((fact[n]%mod)/(((fact[i]%mod)*(fact[n-i]%mod))%mod)%mod))%mod;
        //cout<<"h ";
        cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}
