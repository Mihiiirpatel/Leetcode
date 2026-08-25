class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        bool f;
        for(int i=k; i<=500; i+=k){
          f=true;
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