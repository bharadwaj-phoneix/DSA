class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,c=n+m-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
              nums1[c] = nums2[j];
              c--;
              j--;
            }
            else{
                nums1[c] = nums1[i];
                c--;
                i--;
            }
        }
        
        while(j>=0){
            nums1[c] = nums2[j];
            c--;
            j--;
        }
        
    }
};
