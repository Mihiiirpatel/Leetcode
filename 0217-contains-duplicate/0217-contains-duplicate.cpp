class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
            for(int j=n-1; j>0; j--){
                if(nums[j]==nums[j-1]){
                    return true;
                }
        }return false;
    }
};