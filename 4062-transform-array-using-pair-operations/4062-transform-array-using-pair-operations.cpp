class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int n=source.size(), m=target.size();
        long long sums=0,sumt=0;
        for(int i=0; i<n; i++){
            sums+=source[i];
            sumt+=target[i];
        }
        if(sums==sumt){return true;}
        else{return false;}
    }
};