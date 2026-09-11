class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        for (int i=0; i<n; i++){
            int m=0;
           for(int j=0; j<n; j++){
              m+=matrix[j][i];
           } 
           ans.push_back(m);
        }
        return ans;
    }
};