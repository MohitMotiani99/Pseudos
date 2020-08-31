#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    int i=n-1;
	    while(k--){
	        cout<<arr[i]<<" ";
	        i--;
	    }
	    cout<<endl;
	}
	return 0;
}
