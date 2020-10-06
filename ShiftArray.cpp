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
    int N;
    int arr[N];
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        //int temp;
        cin >> arr[i]; cin.ignore();
    }
    string direction;
    int pos;
    cin >> direction >> pos; cin.ignore();
    int out[N];
    if(direction=="Left"){
        for(int i=pos;i<N;i++)
        out[i-pos]=arr[i];

        for(int i=0;i<pos;i++)
            out[N-pos+i]=arr[i];
    }
    else{
        for(int i=N-pos;i<N;i++)
        out[i-N+pos]=arr[i];

        for(int i=0;i<N-pos;i++)
            out[pos+i]=arr[i];
    }
    for(int i=0;i<N;i++){
    if(i!=N-1)
    cout<<out[i]<<" ";
    else
    cout<<out[i];
    }
    cout<<endl;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
