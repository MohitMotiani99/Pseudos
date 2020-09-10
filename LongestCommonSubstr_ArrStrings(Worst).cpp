#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string* arr=new string[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    string str=arr[0];
    int len=str.size();
    int res=INT_MIN;
    string ans="";
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            string t=str.substr(i,j-i+1);
            int flag=0;
            for(int k=1;k<n;k++){
                if(arr[k].find(t)==string::npos)
                {break;flag=1;}
            }
            if(flag==0 && j-i+1>res)
            {
                res=j-i+1;
                ans=t;
            }
        }
    }
    cout<<ans<<endl;
}
