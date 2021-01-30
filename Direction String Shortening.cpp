#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    m['E']=m['W']=m['S']=m['N']=0;
    for(int i=0;i<s.size();i++)
    m[s[i]]++;
    
    string ans="";
    if(m['E']>m['W'])
    {
        for(int i=0;i<m['E']-m['W'];i++)
        ans+='E';
    }
    else if(m['E']<m['W'])
    {
        for(int i=0;i<m['W']-m['E'];i++)
        ans+='W';
    }
    //ans=ans+(m['W']-m['E'])*'W';
    
    if(m['N']>m['S'])
    {
        for(int i=0;i<m['N']-m['S'];i++)
        ans+='N';
    }
    //ans=ans+(m['N']-m['S'])*'N';
    else if(m['S']>m['N'])
    {
        for(int i=0;i<m['S']-m['N'];i++)
        ans+='S';
    }
    //ans=ans+(m['S']-m['N'])*'S';
    
    sort(ans.begin(),ans.end());
    
    cout<<ans<<endl;
}
