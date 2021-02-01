#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    double size=s.size();
    
    long times=ceil(n/size);
    
    
    int cnt=0;
    for(int i=0;i<s.size();i++){
    if(s[i]=='a')
    cnt++;
    }
    
    long long ans=0;
    ans=cnt*(times-1);
    n=n-s.size()*(times-1);
    
    for(long i=0;i<n;i++)
    {
        if(s[i]=='a')
        ans++;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
