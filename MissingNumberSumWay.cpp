#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    //bool vis[10]={false};
    //vis[0]=true;
    int sum=0;
    for(int i=0;i<s.size();i++){
    if(s[i]!='?')
    sum+=(s[i]-'0');
    }

    /*for(int i=0;i<10;i++){
        if(vis[i]==false)
        {cout<<i<<endl;break;}
    }*/
    cout<<45-sum<<endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
