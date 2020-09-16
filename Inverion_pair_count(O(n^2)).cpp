#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n],arr2[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr2[i]=arr[i];
	    }
	    /*
	    sort(arr2,arr2+n);
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        if(m.find(arr2[i])==m.end())
	        m.insert({arr2[i],i});
	        else
	        m[arr2[i]]=i;
	    }
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(i>m[arr[i]])
	        c+=abs((m[arr[i]]-i));
	    }
	    cout<<c<<endl;
	    */
	    int c=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]>arr[i])
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
