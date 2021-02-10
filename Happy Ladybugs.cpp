#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    map<char,int> m;
    for(int i=0;i<b.size();i++)
    m[b[i]]++;
    
    // if(m.find('_')==m.end())
    // return "NO";
    
    for(auto i:m){
        if(i.second==1 && i.first!='_')
        return "NO";
    }
    
    if(m.find('_')==m.end()){
        int c=1;
        for(int i=1;i<b.size();i++){
            if(b[i]==b[i-1])
            c++;
            else{
                if(c==1)
                return "NO";
                
                c=1;
            }
        }
        if(c==1)
        return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
