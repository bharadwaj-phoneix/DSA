class Solution {
public:
    int longestPalindrome(string s) {
        int oddcount = 0;
        unordered_map<char,int> m;
        for(auto ch:s){
            m[ch]++;
            if(m[ch]%2==1) oddcount++;
            else oddcount--;
        }
        if(oddcount>0) return s.length()-oddcount+1;
        return s.length();
        
    }
};
