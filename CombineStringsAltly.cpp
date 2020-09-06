#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int i=0,j=0;
    int c=0;
    
    string str3="";
    while(i<str1.size() && j<str2.size()){
        if(c%2==0)
        {str3+=str1[i];i++;}
        else
        {str3+=str2[j];j++;}
        c++;
    }
    while(i<str1.size())
    {str3+=str1[i];i++;}
    
    while(j<str2.size())
    {str3+=str2[j];j++;}
    
    cout<<str3<<endl;
}
