/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
long fun(int x,int y,map<pair<int,int>,long>& m){
    
    if(x==0)
    return y+1;

    if(m.find({x,y})!=m.end())
    return m[{x,y}];

    if(x>0 && y==0)
    m.insert({{x,y},fun(x-1,1,m)});

    if(x>0 && y>0)
    m.insert({{x,y},fun(x-1,fun(x,y-1,m),m)});
    
    return m[{x,y}];

}
int main(){
    int x,y;
    cin>>x>>y;
    map<pair<int,int>,long> m;
    long a=fun(x,y,m);
    //cout<<a<<endl;
    string ans=to_string(a);
    if(ans.size()>=3)
    cout<<stoi(ans.substr(ans.size()-3))<<endl;
    else
    cout<<stoi(ans)<<endl;
}
