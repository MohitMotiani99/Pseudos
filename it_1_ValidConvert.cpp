#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,flag=0,a;
    string s,t;
    cin>>n>>k>>s>>t;
    set<int> st;
    for(int i=0;i<n;i++){
        if(t[i]>=s[i])
        a=t[i]-s[i];
        else
        a=t[i]-97+122-s[i]+1;
        
        if(a<=0 || a>k ||st.find(a)!=st.end())
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        else
        st.insert(a);
    }
    if(flag==0)
    cout<<"YES"<<endl;
}
