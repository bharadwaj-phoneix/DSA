class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s = 1,res = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[res]){
                s++;
            }
            else{
                s--;
            }
            if(s==0){
                s = 1;
                res = i;
            }
        }
        return nums[res];
    }
};
