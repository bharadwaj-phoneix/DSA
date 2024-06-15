class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 1,n = nums.size();
        int i=1;
        while(i<=3){
            res = res * nums[n-i];
            i++;
        }
        int pro = 1;
        pro = nums[0]*nums[1]*nums[n-1];
        res = max(pro,res);
        return res;
    }
};
