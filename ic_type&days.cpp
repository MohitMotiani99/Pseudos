#include<bits/stdc++.h>
using namespace std;
int N,M,Q;
bool comp(pair<int,int> a,pair<int,int> b){
      return a.second<b.second;
   }
vector<string> solve (vector<vector<int> > arr, vector<vector<int> > queries) {
   // Your Code Here
      cout<<"H1"<<endl;

   int max[N];
   int min[N];

   vector<pair<int,int>> v;
   /*
   for(int i=0;i<N;i++){
         cout<<i<<endl;
      v.push_back(make_pair(arr[i][0],arr[i][1]));
   }
   */
      cout<<"H1"<<endl;

   sort(v.begin(),v.end(),comp);
   //   cout<<"H1"<<endl;

   //cout<<"H1"<<endl;

   for(int i=0;i<v.size();i++){
      max[i]=v[i].first;

      if(v[i].first%M==0)
      min[i]=v[i].first/M;
      else
      min[i]=v[i].first/M + 1;
   }
   //cout<<"H1"<<endl;

   for(int i=N-2;i>=0;i--){
      min[i]+=min[i-1];
   }
      //cout<<"H1"<<endl;

   for(int i=N-2;i>=0;i--){
      max[i]+=max[i-1];
   }
   //cout<<"H1"<<endl;
   vector<string> ans;
   for(int i=0;i<Q;i++){
      //cout<<"H1"<<endl;
      int pr=arr[queries[i][0]-1][1];  
      int j;
      for(j=N-1;j>=0;){
         //cout<<"H1"<<endl;
         if(v[j].second>pr)
         j--;
         else
         break;
      }
      int maxd=max[j+1]+arr[queries[i][0]-1][0];
      int mind=min[j+1];
      if(queries[i][1]>=mind && queries[i][1]<=maxd)
      ans.push_back("Yes");
      else
      ans.push_back("No");
   }
   return ans;
}
int main(){
    cin>>N>>M;
    vector<vector<int> > arr(2,vector<int>(N));
    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    cin>>Q;
    vector<vector<int> > queries(Q,vector<int>(2));
    for(int i=0;i<Q;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    vector<string> ans=solve(arr,queries);
    for(int i=0;i<Q;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
