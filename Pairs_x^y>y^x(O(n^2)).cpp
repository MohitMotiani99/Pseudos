class Solution{   
public:
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        long long c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pow(X[i],Y[j])>pow(Y[j],X[i]))
                c++;
            }
        }
        return c;
    }
};
