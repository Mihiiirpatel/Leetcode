class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
             bool tf=false;
            ans=nums[i];
            for(int j=nums.size()-1; j>=0; j--){
                if(i==j){
                    continue;
                }else{
             if(nums[i]==nums[j]){
                tf=true;
                break;
             }}
            }
            if(tf==false){return ans; }
        }
        return ans;
    }
};