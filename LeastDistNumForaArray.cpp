/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n,int x){
    int s=0;
    for(int i=0;i<n;i++)
    s+=abs(x-arr[i]);

    return s;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        long sum=0;
        unordered_map<int,int> m;
        sort(arr,arr+n);
        int mean,mode,med;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            m[arr[i]]++;
        }
        int maxr=INT_MIN;
        for(auto i=m.begin();i!=m.end();i++){
            if(maxr<i->second){
                maxr=i->second;
                mode=i->first;
            }
        }
        mean=sum/n;
        if(n%2==0)
            med=(arr[(n-1)/2]+arr[(n+1)/2])/2;
        else
            med=arr[n/2];
        
        int minr=INT_MAX;
        minr=min(minr,fun(arr,n,mean));
        minr=min(minr,fun(arr,n,mean+1));
        minr=min(minr,fun(arr,n,med));
        //minr=min(minr,fun(arr,n,med+1));
        minr=min(minr,fun(arr,n,mode));
        cout<<minr<<endl;
    }
}
