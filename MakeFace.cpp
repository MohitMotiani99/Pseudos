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
    string hair;
    string cheek;
    string eye;
    string nose;
    string mouth;
    string chin;
    cin >> hair >> cheek >> eye >> nose >> mouth >> chin; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    cout<<hair<<hair<<hair<<hair<<hair<<endl;
    cout<<cheek<<eye<<" "<<eye<<cheek<<endl;
    cout<<cheek<<" "<<nose<<" "<<cheek<<endl;
    cout<<cheek<<" "<<mouth<<" "<<cheek<<endl;
    if(chin.size()==3)
    cout<<" "<<chin<<endl;
    else if(chin.size()==1)
    cout<<"  "<<chin<<endl;
    else if(chin.size()==5)
    cout<<chin<<endl;

    //cout << "result" << endl;
}
