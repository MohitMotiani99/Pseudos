#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
    
    string ans,s=w;
    int c=0;
    do{
        ans=w;
        c++;
        if(c==2)
        break;
    }while(next_permutation(w.begin(),w.end()));
    
    if(ans==s)
    return "no answer";
    else
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
