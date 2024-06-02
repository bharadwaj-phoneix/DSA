class Solution {
public:
    int minimumChairs(string s) {
        int temp = 0,res = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='E'){
                temp++;
                res = max(res,temp);
            }
            else{
                temp--;
            }
        }
        return res;
    }
};
