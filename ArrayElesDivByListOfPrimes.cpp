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
    int n;
    cin >> n; cin.ignore();
    int m;
    cin >> m; cin.ignore();
    long pp=1;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p; cin.ignore();
        pp*=p;
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x; cin.ignore();
        if(x%pp==0)
        cout<<"T";
        else
        cout<<"F";
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << endl;
}
