class Solution {
public:
    string addStrings(string num1, string num2) {
        //cout<<num1<<" "<<num2<<endl;
        int sum=0,c=0;
        int i=num1.size()-1,j=num2.size()-1;
        int p=0;
        string ans,tmp;
        while(i>=0 && j>=0){
            //sum*=pow(10,p++);
            sum=(num1[i]-'0' + num2[j] - '0' +c);
            c=sum/10;
            //cout<<p<<endl;
            sum=sum%10;
            tmp=to_string(sum);
            tmp+=ans;
            ans=tmp;
            i--;
            j--;
        }
        while(i>=0){
            //sum*=pow(10,p++);
            sum=(num1[i]-'0' +c);
            c=sum/10;
            sum=sum%10;
            tmp=to_string(sum);
            tmp+=ans;
            ans=tmp;
            i--;
        }
        while(j>=0){
           // sum*=pow(10,p++);
            //cout<<j<<" ";
            sum=(num2[j]-'0' +c);
            c=sum/10;
            sum=sum%10;
            //cout<<sum<<" ";
            tmp=to_string(sum);
            tmp+=ans;
            ans=tmp;
            j--;
            //cout<<ans<<endl;
        }
        if(c!=0){
            tmp=to_string(1);
            tmp+=ans;
            ans=tmp;
        }
        return ans;
    }
};
