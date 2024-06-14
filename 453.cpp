class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX;
        for(auto num:nums)m = min(m,num);
        int res = 0;
        for(int i=0;i<nums.size();i++)res += abs(m-nums[i]);
        return res;
    }
};
