class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int c=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                for(int k=j+1;k<b;k++){
                    if((long)((long)nums1[i]*nums1[i])==(long)((long)nums2[j]*nums2[k]))
                        c++;
                }
            }
        }
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                for(int k=j+1;k<a;k++){
                    if((long)((long)nums2[i]*nums2[i])==(long)((long)nums1[j]*nums1[k]))
                        c++;
                }
            }
        }
        return c;
    }
};

