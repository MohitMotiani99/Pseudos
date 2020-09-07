#include<bits/stdc++.h>
using namespace std;
int magic(int arr[],int n,int a,int b,int i,int j){
    if(i>j)
    return INT_MIN;
    if(i==j)
    {
        return abs(a-b);
    }
    
    int x=magic(arr,n,a+arr[i],b+arr[j],i+1,j-1);
    int temp=arr[i];
    arr[i]=(arr[i-1]+arr[i+1])/2;
    int y=magic(arr,n,a+arr[i],b+arr[j],i+1,j-1);
    arr[i]=temp;
    temp=arr[j];
    arr[j]=(arr[j-1]+arr[j+1])/2;
    int z=magic(arr,n,a+arr[i],b+arr[j],i+1,j-1);
    arr[j]=temp;
    
    temp=arr[i];
    int temp2=arr[j];
    arr[i]=(arr[i-1]+arr[i+1])/2;
    arr[j]=(arr[j-1]+arr[j+1])/2;
    int w=magic(arr,n,a+arr[i],b+arr[j],i+1,j-1);
    arr[i]=temp;
    arr[j]=temp2;
    
    //cout<<x<<" "<<y<<" "<<z<<" "<<w<<endl;
    
    return max(x,max(y,max(z,w)));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int a=arr[0],b=arr[n-1];
    int i=1,j=n-2;
    cout<<magic(arr,n,a,b,i,j)<<endl;
}
