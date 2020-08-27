#include<bits/stdc++.h>
using namespace std;
string lps(string str,int len){
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
            low--;
            high++;
        }
    }
    return str.substr(start,maxlen);
}
int main(){
    cout<<lps("abaab",5)<<endl;
}
