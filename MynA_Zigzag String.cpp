string Solution::convert(string A, int B) {
    if(A.size()==1 || B==1 || B>=A.size())
    return A;
    int gap=2*B-2;
    int gap2=2;
    int i=0;
    //bool vis[A.size()];
    //memset(vis,false,sizeof(A));
    string ans="";
    while(gap>=0){
        
        if(i==0){
            for(int j=i;j<A.size();j+=gap)
            {
                ans+=A[j];//vis[j]=true;
                
            }
        }
        else if(i==B-1){
            for(int j=i;j<A.size();j+=gap2)
            {
                
                ans+=A[j];//,vis[j]=true;
                
            }
            gap2+=2;
        }
        else{
            int c=0;
            for(int j=i;j<A.size();)
            {
                //if(j<A.size())
                ans+=A[j];//,vis[j]=true;
                if(gap!=0 && c%2==0)
                j+=gap,c=1;
                else if(gap2!=0)
                j+=gap2,c=0;
            }
            gap2+=2;
        }
        i++;
        gap-=2;
    }
    
    // if(gap==0){
    //     for(int i=0;i<A.size();i++){
    //         if(!vis[i])
    //         ans+=A[i];
    //     }
    // }
    return ans;
}
