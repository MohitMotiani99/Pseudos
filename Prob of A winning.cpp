#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,m;
    cin>>m>>n;
    
    char ch;
    double ans=0.000000000;
    int c=1;
    int a=m,b=n;
    while(1){
        if(a==0)
            {ch='b';break;}
        else if(b==0)
            {ch='a';break;}
        else if(c%2==1){
            double f=1.000000000;
            for(int i=0;i<c/2;i++)
            {f*=((a/(a+1))*(b/(b+1)));a--;b--;}
            
            f*=(1/(b+1));
            
            ans+=f;
            c+=2;
        }
        
    }
    if(ch=='a')
    cout<<ans<<endl;
    else
    cout<<1.000000000-ans<<endl;
    
    
}
