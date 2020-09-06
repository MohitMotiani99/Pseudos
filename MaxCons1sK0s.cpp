#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string str;
    cin>>n>>k;
    cin>>str;
    if(str.size()==0)
    {
        cout<<"0"<<endl;
    }
    else{
    int s=0,e=0,c=0;
    
    int maxr=INT_MIN,cmax=0;
    while(e<n){
        while((c<k || str[e]=='1') && e<n){
           if(str[e]=='0')
           c++;
           //if(c<k)
           e++;
        }
        //cout<<s<<" "<<e<<"         ";
        if(c==k){
            
            if(maxr<e-s){
                maxr=e-s;
                cmax=1;
            }
            else if(maxr==e-s)
            cmax++;
            
            if(str[s]=='0')
            {c--;
            s++;
            }
            if(c==k && str[e]=='0')
            s++;
        //cout<<maxr<<" "<<cmax<<endl;
        }
     }
     cout<<cmax<<endl;
    }
}
