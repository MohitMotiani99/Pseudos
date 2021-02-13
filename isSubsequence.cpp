class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool dp[s.size()+1][t.size()+1];
        
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<=t.size();j++){
                if(i==0)
                    dp[i][j]=true;
                else if(j==0)
                    dp[i][j]=false;
                else if(i==0 || j==0)
                    dp[i][j]=false;
                else if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=dp[i][j-1];
                
                cout<<dp[i][j]<<"  ";
            }
            cout<<endl;
        }
        return dp[s.size()][t.size()];
    }
};
