class Solution {
public:
    int dS(int n){
        int res = 0;
        while(n>0){
            int rem = n%10;
            res = res + rem*rem;
            n = n/10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_map <int,int> m;
        while(n!=1){
            if(m[n]==1){
                return false;
            }
            m[n]++;
            n = dS(n);
        }
        return true;
    }
};
