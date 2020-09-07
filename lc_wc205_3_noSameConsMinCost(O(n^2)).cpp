class Solution {
public:
    int minCost(string str, vector<int>& cost) {
        int sum=0;
        //for(int j=0;j<cost.size();j++)
          //          cout<<cost[i]<<" ";
            //    cout<<endl;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]==str[i+1]){
                if(cost[i]<cost[i+1])
                {str.erase(i,1);sum+=cost[i];cost.erase(cost.begin()+i,cost.begin()+i+1);}
                else
                {str.erase(i+1,1);sum+=cost[i+1];cost.erase(cost.begin()+i+1,cost.begin()+i+2);}
                
                //for(int j=0;j<cost.size();j++)
                //    cout<<cost[j]<<" ";
                //cout<<endl;
                //cout<<str<<" "<<i<<" "<<sum<<endl;
                i--;
            }
        }
        return sum;
    }
};
