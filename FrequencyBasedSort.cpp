#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>& a,pair<int,int>& b){
    if(a.second>b.second)
    return true;
    else if(a.second==b.second && a.first<b.first)
    return true;
    else
    return false;
}
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
        unordered_map<int,int> m;// or may be map also
         cin>>n;
         int x;
         for(int i=0;i<n;i++){
             cin>>x;
             if(m.find(x)==m.end())
             m.insert({x,1});
             else
             m[x]++;
         }
         vector<pair<int,int>> v;
         for(auto i:m){
             v.push_back(i);
         }
         sort(v.begin(),v.end(),comp);//to sort a map acc to values first copy it to a pair vector
         for(auto i:v){
             for(int j=0;j<i.second;j++)
             cout<<i.first<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
