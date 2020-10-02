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
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    long sum=0;
    if(n==1)
    sum=arr[0];
    else{
    for(int i=0;i<n;i++){
        sum+=((n-1)*arr[i]*(i+2));
    }
    }
    cout<<sum<<endl;
}
