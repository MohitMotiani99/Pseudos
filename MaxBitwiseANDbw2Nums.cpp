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
    int t;
    long long a,b;
    cin>>t;

    while(t--){

        int exp=1;
        cin>>a>>b;
        while(1){
            if(b/((long)pow(2,exp))==0)
            break;
            exp++;
        }
        //cout<<exp<<" ";
        if(b!=pow(2,exp))
        exp--;
        if(b==a+1)
        cout<<(a & b)<<endl;
        else{
        
        //long long p=pow(2,exp)-1;
        unsigned long long q=pow(2,exp)-2;

        //cout<<exp<<" "<<" "<<q<<endl;

        cout<<q<<endl;
        }
    }



}
