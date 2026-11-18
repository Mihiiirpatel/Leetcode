class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size(),max=0,k=0;
        for(int i=0; i<n; i++){
           if(max<nums[i]){
            max=nums[i];
            k=i;
           }
        }
        for(int i=0; i<n; i++){
            if(nums[i]*2>max && nums[i]!=max)return -1;
        }
        return k;
    }
};