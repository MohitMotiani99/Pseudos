#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
string fairRations(vector<int> B) {
    /*
    int c=0;
    int f=0;
    for(int i=0;i<B.size();i++){
        if(B[i]%2==1 && f==0){
            if(i+1<B.size() && B[i+1]%2==1)
            {B[i]++;B[i+1]++;c+=2;}
            else if(i+1<B.size() && B[i+1]%2==0)
            return -1;
        }
        else if(B[i]%2==1 && f==1){
            B[i]++;
            B[i-1]++;
            c+=2;
            f=0;
        }
        else if(B[i]%2==0 && f==1)
        return -1;
    }
    return c;
    int n=B.size();
    int ans=0;
    if(n==1 ){
        if(B[0]%2==0)
        return "0";
        else 
        return "NO";
    }
    else if(n==2){
        if((B[0]%2==0 && B[1]%2==0) || (B[0]%2==1 && B[1]%2==1))
        return to_string(B[0]%2 + B[1]%2);
        else
        return "NO";
    }
    else{
        
        for(int i=1;i<n-1;i++){
            int a=B[i-1];
            int b=B[i];
            int c=B[i+1];
            
            if(a%2==1 && b%2==0 && c%2==1){
                B[i-1]++;
                B[i]+=2;
                B[i+1]++;
                ans+=4;
            }
            else if(a%2==1 && b%2==1 && c%2==0){
                B[i-1]++;
                B[i]++;
                //B[i+1]++;
                ans+=2;
            }
            else if(a%2==0 && b%2==1 && c%2==1){
                //B[i-1]++;
                B[i]++;
                B[i+1]++;
                ans+=2;
            }
            
        }
    }
    return to_string(ans);*/
    
    int bread=0;
    for(int i=0;i<B.size()-1;i++){
        if(B[i]%2==1){
            B[i]++;
            B[i+1]++;
            bread+=2;
        }
    }
    if(B[B.size()-1]%2==1)
    return "NO";
    else {
    return to_string(bread);
    }
}

/*int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split_string(B_temp_temp);

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    int result = fairRations(B);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}*/
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<fairRations(arr)<<endl;
}
