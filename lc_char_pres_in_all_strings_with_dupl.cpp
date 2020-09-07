class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int dp[A.size()][26];
        for(int i=0;i<A.size();i++){
            for(int j=0;j<26;j++)
                dp[i][j]=0;
        }
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                dp[i][A[i][j]-'a']++;
            }
        }
        vector<string> v;
        for(int j=0;j<26;j++){
            int minr=INT_MAX;
            for(int k=0;k<A.size();k++){
                minr=min(minr,dp[k][j]);
            }
            if(minr>0)
            {
                char ch=(char)(j+'a');
                string x="";
                x+=ch;
                for(int k=0;k<minr;k++)
                    v.push_back(x);
            }
        }
        return v;
    }
};
