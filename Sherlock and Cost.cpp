#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cost function below.
int helper(vector<int> B,int n,int st,int sum,int rec){
    if(st==n)
    return sum;
    
    int sumr=INT_MIN;
    for(int i=1;i<=B[st];i++)
    {
        if(st==0)
        sumr=max(sumr,helper(B,n,st+1,sum,i));
        else
        sumr=max(sumr,helper(B,n,st+1,sum+abs(i-rec),i));
    }
    return sumr;
}
int cost(vector<int> arr) {
    
    //B.insert(B.begin(),0);
    //return helper(B,B.size(),0,0,0);
    int n=arr.size();
    int sum=0;
    int sum2=0;
    vector<int> t=arr;
    // for(int i=0;i<n;i++){
    //     // if(arr[i-1]>arr[i]){
    //     //     arr[i]=1;
    //     // }
    //     // else
    //     // arr[i-1]=1;
        
    //     // sum+=abs(arr[i]-arr[i-1]);
    //     if(i%2==1)
    //     arr[i]=1;
    // }
    // for(int i=1;i<n;i++)
    // sum+=abs(arr[i]-arr[i-1]);
    
    // for(int i=0;i<n;i++){
    //     // if(arr[i-1]>arr[i]){
    //     //     arr[i]=1;
    //     // }
    //     // else
    //     // arr[i-1]=1;
        
    //     // sum+=abs(arr[i]-arr[i-1]);
    //     if(i%2==0)
    //     t[i]=1;
    // }
    // for(int i=1;i<n;i++)
    // sum2+=abs(t[i]-t[i-1]);
    // return max(sum,sum2);
    
    // for(int i=1;i<n-1;i++){
    //     if(abs(arr[i]-1)+abs(arr[i]-1)<abs(1-arr[i-1])+abs(1-arr[i+1]))
    //     arr[i]=1;
    //     else
    //     arr[i-1]=arr[i+1]=1;
    // }
    // if(abs(arr[0]-arr[1])<abs(1-arr[1]))
    // arr[0]=1;
    // if(abs(arr[n-1]-arr[n-2])<abs(1-arr[n-2]))
    // arr[n-1]=1;
    
    // for(int i=1;i<n;i++)
    // sum+=abs(arr[i]-arr[i-1]);
    
    int dp[n][2];
    for(int i=0;i<n;i++){
        if(i==0){
            dp[i][0]=dp[i][1]=0;
        }
        else{
            dp[i][0]=max(dp[i-1][0]+abs(arr[i]-arr[i-1]),dp[i-1][1]+abs(arr[i]-1));
            dp[i][1]=max(dp[i-1][0]+abs(arr[i-1]-1),dp[i-1][1]);
        }
    }
    
    return max(dp[n-1][0],dp[n-1][1]);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string B_temp_temp;
        getline(cin, B_temp_temp);

        vector<string> B_temp = split_string(B_temp_temp);

        vector<int> B(n);

        for (int i = 0; i < n; i++) {
            int B_item = stoi(B_temp[i]);

            B[i] = B_item;
        }

        int result = cost(B);

        fout << result << "\n";
    }

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
}
