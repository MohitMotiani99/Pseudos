#include<bits/stdc++.h>
using namespace std;
void recFun(string str,int s,int end){
    if(s==end){
        //cout<<str<<endl;
        string s1;
        stack<int> s;
        char op;
        for(int i=0;i<end;){
            if(str[i]>='0' && str[i]<='9'){
            while(str[i]>='0' && str[i]<='9'){
                s1+=str[i];
                i++;
            }
            s.push(stoi(s1));
            s1="";
            if(s.size()==2){
                int a=s.top();
                //cout<<a<<" ";
                s.pop();
                int b=s.top();
                //cout<<b<<endl;
                s.pop();
                switch(op){
                    case '+' :
                        s.push(a+b);
                        break;
                    case '-' :
                        s.push(b-a);
                        break;
                }
            }
            
            }
            else if(str[i]=='+' || str[i]=='-')
            {
                op=str[i];
                i++;
            }
        }
        if(s.top()==100)
        {cout<<str<<endl;
        }
        
        return;
    }
    int i;
    for(i=s;i<end;i++){
        if(str[i]=='#')
        break;
    }
    str[i]='+';
    recFun(str,i+1,end);
    str[i]='-';
    recFun(str,i+1,end);
    str[i]='#';
    str.erase(str.begin()+i);
    //cout<<"H"<<endl;
    recFun(str,i,end-1);
}
int main(){
    string str;
    cin>>str;
    recFun(str,0,str.size()-1);
}
