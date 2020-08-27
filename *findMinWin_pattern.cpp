#include<bits/stdc++.h>
using namespace std;
string findMinWin(string s,string p){
    int l1=s.length();
    int l2=p.length();
    
    if(l1<l2)
    return "";
    
    int mapp[256]={0};
    int maps[256]={0};
    
    for(int i=0;i<l2;i++)
    mapp[p[i]]++;
    
    int start=0,start_i=-1,minlen=INT_MAX;
    int count=0;
    for(int i=0;i<l1;i++){
        maps[s[i]]++;
        
        if(mapp[s[i]]!=0 && maps[s[i]]<=mapp[s[i]])
        count++;
        
        if(count==l2){
        while(maps[s[start]]>mapp[s[start]] || mapp[s[start]]==0){
            if(maps[s[start]]>mapp[s[start]])
            maps[s[start]]--;
            
            start++;
            
        }
        if(minlen>(i-start+1)){
                minlen=i-start+1;
                start_i=start;
        }
    }
}
    if(start_i==-1)
    return "";
    else
    return s.substr(start_i,minlen);
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<findMinWin(s,t)<<endl;
}
