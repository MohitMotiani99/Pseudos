class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0){
            vector<vector<int>> v;
            return v;
        }
        vector<vector<int>> v(numRows);
        v[0].push_back(1);
        if(numRows==1)
            return v;
        v[1].push_back(1);
        v[1].push_back(1);
        if(numRows==2)
            return v;
        for(int i=2;i<numRows;i++){
            v[i].push_back(1);
            for(int j=0;j<v[i-1].size()-1;j++)
                v[i].push_back(v[i-1][j]+v[i-1][j+1]);
            v[i].push_back(1);
        }
        return v;
    }
};
