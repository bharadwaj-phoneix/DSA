class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int res = sum;
        for(int i=0;i<k;i++){
            sum = sum + cardPoints[n-i-1] - cardPoints[k-i-1];
            res = max(sum,res);
        }
        return res;
    }
};
