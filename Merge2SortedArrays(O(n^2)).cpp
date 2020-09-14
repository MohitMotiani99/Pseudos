//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(arr1[i]>arr2[j])
	            swap(arr1[i],arr2[j]);
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    
	}
};
