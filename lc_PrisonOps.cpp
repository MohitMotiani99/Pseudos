class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int> temp=cells;
        for(int i=0;i<8;i++)
            cout<<cells[i]<<" ";
        cout<<endl;
       for(int i=0;i<N;i++){
           for(int j=1;j<cells.size()-1;j++){
               if(cells[j-1]==cells[j+1])
                   temp[j]=1;
               else
                   temp[j]=0;
           }
           cells=temp;
           for(int i=0;i<8;i++)
            cout<<cells[i]<<" ";
        cout<<endl;
       }
        return cells;
    }
};
