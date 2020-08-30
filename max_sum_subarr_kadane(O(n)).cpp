#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[],int n){
    int msf=INT_MIN,meh=0;
    for(int i=0;i<n;i++){
        meh+=a[i];
        if(meh>msf)
        msf=meh;
        
        if(meh<0)
        meh=0;
        
        //cout<<msf<<endl;
    }
    return msf;
}
int main(){
    int a[] = {-2, -3, -4, -1, -2, -1, -5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 

}
