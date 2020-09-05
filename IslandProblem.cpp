bool isSafe(int a,int b,int N,int M,bool **vis,vector<int> A[]){
    if(a>=0 && a<N && b>=0 && b<M && !vis[a][b] && A[a][b])
    return true;
    
    return false;
}
void dfs(vector<int> A[],int i,int j,bool **vis,int N,int M){
    static int a[]={0,1,-1,0,1,-1,1,-1};
    static int b[]={1,0,0,-1,1,1,-1,-1};
    
    
    vis[i][j]=true;
    for(int n=0;n<8;n++){
        if(isSafe(i+a[i],j+b[i],N,M,vis,A))
        dfs(A,i+a[i],j+b[i],vis,N,M);
    }
}
int findIslands(vector<int> A[], int N, int M) {

    // Your code here
    bool **vis=new bool*[N];
    for(int i=0;i<N;i++)
    vis[i]=new bool[M];
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j] && !vis[i][j])
            {
                dfs(A,i,j,vis,N,M);
                count++;
            }
        }
    }
    return count;
}
