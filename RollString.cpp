#include<iostream>
using namespace std;
int main()
 {
     int t,n;
     string str;
     cin>>t;
     while(t--){
         cin>>n;
         cin>>str;
         int arr[n];
         for(int i=0;i<n;i++)cin>>arr[i];
         
         for(int i=0;i<n;i++){
             for(int j=0;j<arr[i];j++)
             {
            if(str[j]=='y')
            str[j]='z';
            else{
            str[j]=(str[j]+1)%122;
             if(str[j]>='a' && str[j]<='z')
             continue;
             else
              str[j]+=96;   
             }
             }
         }
         cout<<str<<endl;
     }
	//code
	return 0;
}
