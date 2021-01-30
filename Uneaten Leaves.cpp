#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return ((a*b)/__gcd(a,b));
}
int main(){
    int n,k;
    cin>>n>>k;
    
    int arr[k];
    for(int i=0;i<k;i++)cin>>arr[i];
    
    set<set<int> > s;
    
    for(int i=0;i<k;i++){
        for(auto j=s.begin();j!=s.end();j++)
        {
            set<int> s1=*j;
            s1.insert(arr[i]);
            s.insert(s1);
        }
        set<int> s1;
        s1.insert(arr[i]);
        s.insert(s1);
    }
    int sum=n;
    for(auto i=s.begin();i!=s.end();i++){
        set<int> s1=*i;
        int lcmi=1;
        for(auto j=s1.begin();j!=s1.end();j++)
        lcmi=lcm(lcmi,*j);
        
        sum=sum+pow(-1,s1.size())*(n/lcmi);
    }
    cout<<sum<<endl;
}
