class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=k; i<=1000; i+=k){
        bool f=true;
          for(int j=0; j<n; j++){
            if(nums[j]==i){
                f=false;
                break;
            }
          }if(f==true){
            return i;
          }
        }
        return 0;
    } 
};