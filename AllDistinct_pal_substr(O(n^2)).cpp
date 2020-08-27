#include<bits/stdc++.h>
using namespace std;
set<pair<int,int>> All_Distinct_pal_s(string str,int len){
    set<pair<int,int>> s;
    int maxlen=1;
    int low,high,start=0;
    for(int i=1;i<len;i++){
        low=i-1;
        high=i;
        while(low>=0 && high<len && str[low]==str[high]){
            if(high-low+1>maxlen){
                start=low;
                maxlen=high-low+1;
            }
            s.insert({low,high});
            low--;
            high++;
        }
        low=i-1;
        high=i+1;
        while(low>=0 && high<len && str[low]==str[high]){
            if(high-low+1>maxlen){
                start=low;
                maxlen=high-low+1;
            }
            s.insert({low,high});
            low--;
            high++;
        }
    }
    //return str.substr(start,maxlen);
    return s;
}
int main(){
    set<pair<int,int>> s=All_Distinct_pal_s("abaaab",6);
    set<string> s2;
    string str="abaaab";
    for(auto i=s.begin();i!=s.end();i++){
        s2.insert(str.substr((*i).first,(*i).second-(*i).first+1));
        //cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    for(auto i=s2.begin();i!=s2.end();i++){
        //s2.insert(str.substr((*i).first,(*i).second-(*i).first+1));
        cout<<*i<<endl;
    }
    //cout<<lps("abaaab",6)<<endl;
}
