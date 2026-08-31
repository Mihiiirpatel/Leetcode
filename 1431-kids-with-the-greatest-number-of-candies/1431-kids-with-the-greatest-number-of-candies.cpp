class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size(),max=0;
        for(int i=0; i<n; i++){
           if(max<candies[i]){ max=candies[i]; }
        }
        vector<bool> ans;
        for(int i=0; i<n; i++){
          ans.push_back(candies[i]+extraCandies >= max);
        }return ans;
    }
};