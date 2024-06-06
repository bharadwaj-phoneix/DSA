class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i=n-2;
        bool t=1;
        while(i>=0){
            if(nums[i]>=n-i-1){
                n = i+1;
                t = 1;
            }
            else{
                t = 0;
            }
            i--;
        }
        return t;
    }
};
