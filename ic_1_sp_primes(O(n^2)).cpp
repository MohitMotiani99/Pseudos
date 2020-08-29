#include<bits/stdc++.h>
using namespace std;
bool sprime(string str){
    if(str.find('2')!=string::npos && str.find('3')!=string::npos && 
    str.find('5')!=string::npos && str.find('7')!=string::npos )
    return true;
    
    return false;
}
int main(){
    long long l,r,c=0;
    cin>>l>>r;
    for(long long i=l;i<=r;i++){
        if(sprime(to_string(i)))
        c++;
    }
    cout<<c<<endl;
}
