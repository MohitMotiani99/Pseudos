#include<bits/stdc++.h>
using namespace std;
bool helper(string a,string b){
    if(a.size()!=b.size())
    return false;
    
    if(a.size()==1 && a[0]==b[0])
    return true;
    
    string ac=a,bc=b;
    
    sort(ac.begin(),ac.end());
    sort(bc.begin(),bc.end());
    
    if(ac!=bc)
    return false;
    
    int n=a.size();
    
    for(int i=0;i<n-1;i++){
        if(helper(a.substr(0,i+1),b.substr(0,i+1)) && helper(a.substr(i+1),b.substr(i+1)))
        return true;
        
        if(helper(a.substr(0,i+1),b.substr(n-i-1,i+1)) && helper(a.substr(i+1),b.substr(0,n-i-1)))
        return true;
    }
    return false;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<helper(a,b)<<endl;
}
