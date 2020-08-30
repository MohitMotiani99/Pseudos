void helper(int s,int e,int arr[],int n){
    int mid=0;
    while(mid<=e){
    if(arr[mid]==1)
    mid++;
    else if(arr[mid]==0){
    swap(arr[s],arr[mid]);
    s++;
    mid++;
    }
    else{
    swap(arr[e],arr[mid]);
    e--;
    //mid++;
    }
    }
}
void sort012(int arr[], int n)
{
    /*int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        c0++;
        else if(arr[i]==1)
        c1++;
        else
        c2++;
    }
    vector<int> v;
    for(int i=0;i<c0;i++)
    v.push_back(0);
    
    for(int i=0;i<c1;i++)
    v.push_back(1);
    
    for(int i=0;i<c2;i++)
    v.push_back(2);
    
    for(int i=0;i<n;i++)
    arr[i]=v[i];
    // coode here*/
    helper(0,n-1,arr,n);
}
