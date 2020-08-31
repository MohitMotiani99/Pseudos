/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> arr, int N) {
    
    vector<int> minarr(N,INT_MAX),maxarr(N,INT_MIN);
    for(int i=0;i<N;i++){
        if(i==0)
        minarr[i]=arr[i];
        else{
            minarr[i]=min(arr[i],minarr[i-1]);
        }
    }
    for(int i=N-1;i>=0;i--){
        if(i==N-1)
        maxarr[i]=arr[i];
        else{
            maxarr[i]=max(arr[i],maxarr[i+1]);
        }
    }
    /*for(int i=0;i<N;i++){
        cout<<minarr[i]<<" "<<maxarr[i]<<"    ";
    }*/
    vector<int> ans(3,-1);
    for(int i=0;i<N;i++){
        if(minarr[i]<arr[i] && arr[i]<maxarr[i])
        {
            ans[0]=minarr[i];
            ans[1]=arr[i];
            ans[2]=maxarr[i];
            break;
        }
    }
    return ans;
    // Your code here
}
