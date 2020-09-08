class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end())
                m.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end() && ((nums[i]!=target-nums[i])||(nums[i]==target-nums[i] && i!=m[target-nums[i]])))
            {
                vector<int> v(2);
                v[0]=i;
                v[1]=m[target-nums[i]];
                return v;
            }
        }
        vector<int> v(2);
        return v;
    }
};
