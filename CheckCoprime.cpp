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
    int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();

int f=0;
    for(int i=2;i<=min(a,b);i++){
        if(b%i==0 && a%i==0)
        {f=1;break;}
    }
    if(!f)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
