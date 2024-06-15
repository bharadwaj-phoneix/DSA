class Solution {
public:
    bool isPalindrome(int x) {
        long int a = 0,temp = x;
        while(x>0){
            a =  a*10 + x%10;
            x/=10;
        }
        return temp == a;
    }
};
