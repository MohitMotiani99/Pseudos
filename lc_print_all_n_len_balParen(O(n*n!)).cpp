class Solution {
public:
    static bool balParen(string str){
        string s=str;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')'){
                if(st.size()!=0){
                    if(st.top()=='(')
                        st.pop();
                    else
                        st.push(')');
                }
                else
                    st.push(')');
            }
        }
        if(st.size()==0)
            return true;
        else
            return false;
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        for(int i=0;i<n;i++)
            s+='(';
        for(int i=0;i<n;i++)
            s+=')';
        vector<string> v;
        do{
            if(balParen(s))
                v.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        
        return v;
    }
};
