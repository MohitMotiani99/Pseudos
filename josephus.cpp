#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    
    for(int i=1;i<=n;i++)
    v.push_back(i);
    int kill=k-1;
    while(v.size()>1){
        v.erase(v.begin()+kill);
        kill=(kill+k-1)%v.size();
    }
    cout<<v[0]<<endl;
}
