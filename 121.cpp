class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        int temp = 0,res = 0;
        for(int i=0;i<prices.size();i++){
            m = min(m,prices[i]);
            temp = prices[i]-m;
            res = max(temp,res);
        }
        return res;
    }
};
