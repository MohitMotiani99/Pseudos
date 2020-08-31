void topoSort(vector<vector<int>> v,int x,bool *visited,stack<int> &s){
    visited[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!visited[v[x][i]])
        topoSort(v,v[x][i],visited,s);
    }
    s.push(x);
}
string findOrder(string dict[], int N, int K) {
    // Your code here
    vector<vector<int>> v(26,vector<int>());
    for(int i=0;i<N-1;i++){
        for(int j=0;j<min(dict[i].size(),dict[i+1].size());j++){
            if(dict[i][j]!=dict[i+1][j]){
                v[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                break;
            }
        }
    }
    stack<int> s;
    bool *visited=new bool[26];
    for(int i=0;i<26;i++)
    visited[i]=false;
    for(int i=0;i<26;i++){
        if(!visited[i] && v[i].size()>0)
        topoSort(v,i,visited,s);
    }
    string out;
    while(!s.empty()){
        out+=(s.top()+'a');
        s.pop();
    }
    return out;
}
