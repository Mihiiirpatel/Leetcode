class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) { return {}; }
        sort(nums.begin(), nums.end());
        int lwst = nums[0];
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            while (lwst < nums[i]) {
                ans.push_back(lwst);
                lwst++;
            }
            lwst = nums[i] + 1; 
        }
        return ans;
    }
};