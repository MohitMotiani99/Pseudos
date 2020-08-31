#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    
	    sort(arr,arr+n);
	    int maxr=0;
	    int count=1;
	    for(int i=1;i<n;i++){
	        if(arr[i]==arr[i-1]+1)
	        count++;
	        else if(arr[i]==arr[i-1])
	        continue;
	        else
	        {
	            maxr=max(maxr,count);
	            count=1;
	        }
	    }
	    maxr=max(maxr,count);
	    cout<<maxr<<endl;
	}
	return 0;
}
