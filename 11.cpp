class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int sum=0,res=INT_MIN;
        while(l<r){
            if(height[l]>height[r]){
                sum = height[r]*(r-l);
                res = max(res,sum);
                r--;
            }
            else{
                sum = height[l]*(r-l);
                res = max(res,sum);
                l++;
            }
            
        }
        return res;
    }
};
