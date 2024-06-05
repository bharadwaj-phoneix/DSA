class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix[n];
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        unordered_map<int, int> m;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (prefix[i] == k) {
                res++;
            }
            if (m.find(prefix[i] - k) != m.end()) {
                res += m[prefix[i] - k];
            }
            m[prefix[i]]++;
        }
        return res;
    }
};
