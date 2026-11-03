class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
       for (int i=left; i<=right; i++) {
          int tmp=i;
          bool slfdiv=true;
            while(tmp>0){
             int dg=tmp%10;
                if(dg==0 || i%dg!=0){
                   slfdiv=false;
                }
                tmp/=10;
            }
            if(slfdiv){
                ans.push_back(i);
            }
        }
        return ans;
    }
};