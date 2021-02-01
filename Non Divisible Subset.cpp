#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */
int helper(vector<int> s,int k,int n,int st,vector<int>& ans){
    if(st==n)
    return ans.size();
    
    bool notdiv=true;
    for(int i=0;i<ans.size();i++){
        if((ans[i]+s[st])%k==0)
        {notdiv=false;break;}
    }
    int a1=helper(s,k,n,st+1,ans);
    int a2=INT_MIN;
    if(notdiv)
    {
        ans.push_back(s[st]);
        a2=helper(s,k,n,st+1,ans);
        ans.pop_back();
    }
    return max(a1,a2);
}
int nonDivisibleSubset(int k, vector<int> s) {
    
    // vector<int> ans;
    // return helper(s,k,s.size(),0,ans);
    
    
    map<int,int> m;
    for(int i=0;i<k;i++)
    m[i]=0;
    
    for(int i=0;i<s.size();i++){
        m[s[i]%k]++;
    }
    int cnt=0;
    for(int i=0;i<=k/2;i++){
        
        if(i==((k-i)%k) && m[i]!=0)
        cnt++;
        else
        cnt+=max(m[i],m[(k-i)%k]);
        
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string s_temp_temp;
    getline(cin, s_temp_temp);

    vector<string> s_temp = split(rtrim(s_temp_temp));

    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        int s_item = stoi(s_temp[i]);

        s[i] = s_item;
    }

    int result = nonDivisibleSubset(k, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
