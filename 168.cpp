class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string res;
        while(n>0){
            n--;
            int rem = n%26;
            n = n/26;
            res.push_back(rem+'A');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
