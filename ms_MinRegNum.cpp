#include <bits/stdc++.h>

using namespace std;

int main() {
    int reg;
    cin>>reg;
    if(reg<0){
    string str=to_string(reg);
    sort(str.begin(),str.end(),greater<char>() );
    /*int i=str.size()-1;
    while(i>=0){
        if(str[i]!='0')
        break;
        i--;
    }*/
    cout<<-1*stoi(str)<<endl;
    }
    else if(reg>0){
        string str=to_string(reg);
        sort(str.begin(),str.end());
        int i=0;
        while(i<str.size()){
            if(str[i]!='0')
            break;
            i++;
        }
        string str2=str[i]+str.substr(0,i)+str.substr(i+1);
        cout<<stoi(str2)<<endl;
 
    }
    else
    cout<<"0"<<endl;
}
