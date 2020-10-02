/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
bool pal(string str){
    string str2=str;
    reverse(str2.begin(),str2.end());
    if(str==str2)
    return true;

    return false;
}
int main(){
    long long n;
    string line;
    while(getline(cin,line)){
    n=stoi(line);
    if(line.size()==1)
    cout<<n<<endl;
    else{
        n=n-n%11;
        n+=11;
        while(1){
            if(pal(to_string(n))){
                cout<<n<<endl;
                break;
            }
            n+=11;
        }
    }
    }
}
