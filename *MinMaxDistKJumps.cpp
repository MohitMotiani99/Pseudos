/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/







// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxr=INT_MIN;
        int j=0;
        int i;
        for(i=n-1;i>=1,j<k-1;i--,j++){
            maxr=max(maxr,arr[i]-arr[i-1]);
        }
        maxr=max(maxr,arr[i]-arr[0]);
        cout<<maxr<<endl;
    }
}
