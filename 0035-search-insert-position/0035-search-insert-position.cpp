class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,n=nums.size()-1;
        if(nums[0]>target){
            return 0;
        }else if(nums[n]<target){
            return n+1;
        }
        for(i=0; i<nums.size()-1; i++){
            if(nums[i]==target || nums[i]>target){
                return i;
            }
        }
        return i;
    }
};