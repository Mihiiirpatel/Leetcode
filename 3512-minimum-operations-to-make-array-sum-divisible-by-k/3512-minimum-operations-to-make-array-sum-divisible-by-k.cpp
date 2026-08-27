class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,ans=k;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        for(int i=0; i<=sum; i+=k){
            ans=sum%k;
        }return ans;
    }
};