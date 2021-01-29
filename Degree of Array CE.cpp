struct triplet{
  int st,end,cnt;
    
    triplet(int a,int b,int c){
        st=a;
        end=b;
        cnt=c;
    }
    
};
class Solution {
public:
    
    int findShortestSubArray(vector<int>& nums) {
        map<int,triplet> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                triplet t(i,i,1);
                m.insert({nums[i],t});
            }
            else{
                m[nums[i]].end=i;
                m[nums[i]].cnt++;
            }
        }
        
        int maxi=INT_MIN,len;
        for(auto i:m){
            if(maxi<(i.second).cnt){
                maxi=(i.second).cnt;
                len=(i.second).end-(i.second).st+1;
            }
            else if(maxi==(i.second).cnt){
                if(len>((i.second).end-(i.second).st+1))
                    len=(i.second).end-(i.second).st+1;
            }
        }
        
        return len;
    }
};
