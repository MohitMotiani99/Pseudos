#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
long bin(int p){
    string ans="";
    while(p!=0){
        ans+=(p%2+'0');
        p/=2;
    }
    reverse(ans.begin(),ans.end());
    if(ans!="")
    return stol(ans);
    else
    return p;
}
int main()
{
    int N;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int P0;
        int P1;
        cin >> P0 >> P1; cin.ignore();

        long a=bin(P0);
        long b=bin(P1);

        cout<<a+b<<endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
