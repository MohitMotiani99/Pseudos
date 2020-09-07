class Solution {
public:
    string modifyString(string str) {
        int n=str.size();
        if(n==1 && str[0]=='?')
            return "a";
        for(int i=0;i<n;i++){
            if(str[i]=='?'){
                if(i==0){
                    if(str[i+1]!='?')
                        str[i]=(str[i+1]=='z')?'a':(str[i+1]+1);
                    else
                        str[i]='a';
                }
                else if(i==n-1){
                    if(str[i-1]!='?')
                        str[i]=(str[i-1]=='z')?'a':(str[i-1]+1);
                    else
                        str[i]='a';
                }
                else{
                    if(str[i-1]!='?' && str[i+1]!='?')
                        str[i]=(max(str[i-1],str[i+1])=='z')?((min(str[i-1],str[i+1])=='a')?'b':'a'):(max(str[i-1],str[i+1])+1);
                    else if(str[i-1]!='?' && str[i+1]=='?')
                        str[i]=(str[i-1]=='z')?'a':(str[i-1]+1);
                }
            }
        }
        return str;
    }
};
