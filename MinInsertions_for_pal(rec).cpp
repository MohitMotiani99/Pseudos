#include<bits/stdc++.h>
using namespace std;
int mpi(string str,int l,int h){
    if(l>h)
    return INT_MAX;
    if(l==h)
    return 0;
    if(l==h-1)
    return (str[l]==str[h])?0:1;
    
    return (str[l]==str[h])?(mpi(str,l+1,h-1)):(1+min(mpi(str,l+1,h),mpi(str,l,h-1)));
}
int main()
 {
     int t;
     string str;
     cin>>t;
     while(t--){
     cin>>str;
     cout<<mpi(str,0,str.size()-1)<<endl;
     }
	//code
	return 0;
}
