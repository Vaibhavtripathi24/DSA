class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long totalhappiness = 0;
        for(int i = 0; i<k ;i++ ){
           int effectivehappiness = happiness[happiness.size()-1-i] - i;
            if(effectivehappiness<=0) break;
            totalhappiness += effectivehappiness;
            }
        return totalhappiness;
    }
};