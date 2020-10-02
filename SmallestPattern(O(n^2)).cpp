#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string text;
    getline(cin, text);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int len=INT_MAX;
    for(int i=1;i<=text.size()/2;i++){
        string str=text.substr(0,i);
        int f=0;
        for(int j=i;j<text.size();j+=i){
            if(j+i<text.size())
            {string a=text.substr(j,i);
            if(a!=str){f=1;
            break;}
            }
            if(!f)
            len=min(len,i);
        }
    }
    string out;
    if(text.size()%len!=0)
    out=text.substr(0,len)+"*("+to_string(text.size()/len)+"+"+to_string(text.size()-(text.size()/len)*len)+"/"+to_string(len)+")";
    else
    out=text.substr(0,len)+"*("+to_string(text.size()/len)+")";
    cout << out << endl;
}
