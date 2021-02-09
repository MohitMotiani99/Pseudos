#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
     int n=container.size();
     int rsum[n],csum[n];
     memset(rsum, 0,sizeof(rsum));
     memset(csum, 0,sizeof(csum));
     bool poss=true;
     
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             rsum[i]+=container[i][j];
             csum[j]+=container[i][j];
         }
     }
     
     sort(rsum,rsum+n);
     sort(csum,csum+n);
     
     for(int i=0;i<n;i++){
         if(rsum[i]!=csum[i])
         return "Impossible";
     }
     return "Possible";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
