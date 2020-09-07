class Solution {
public:
    int balancedStringSplit(string str) {
       int lc=0;
        int rc=0;
        int c=0;
        int i=0;
        while(i<str.size()){
            //cout<<i<<" ";
            while((lc!=rc ||lc ==0 ||rc==0) && i<str.size() ){
                
                if(str[i]=='L')
                    lc++;
                else
                    rc++;
               i++;
               if(lc==rc)
                   break;
            }
            //cout<<i<<" "<<endl;
            if(lc==rc && lc!=0){
                c++;
                lc=rc=0;
            }
        }
        return c;
    }
};
