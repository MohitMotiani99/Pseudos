#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,x,y;
    cin>>s;
    cin>>n>>x>>y;
    
    int diff=y-x;
    
    set<string> st;
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++){
        cout<<"H@"<<"  ";
        cout<<i<<"  ";
        cout<<s[i]<<" ";
        
        for(auto j=st.begin();j!=st.end();j++)
            st.insert(*j + s[i]);
        
        st.insert(to_string(s[i]));
        cout<<st.size()<<"  "<<s.size()<<" "<<i<<endl;

    }
    cout<<"H"<<endl;
    int cnt=0;
    for(auto i=st.begin();i!=st.end();i++){
        int r=0;
        int l=0;
        
        string a=*i;
        for(int j=0;j<a.size();j++){
            if(a[j]=='r')
            r++;
            else
            l++;
        }
        
        if(r-l==diff)
        cnt++;
    }
    cout<<cnt<<endl;
}
