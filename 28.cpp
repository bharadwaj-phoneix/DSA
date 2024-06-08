class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = 0, b = 0;
        int res = -1;
        if (needle.size() > haystack.size())
            return -1;
        while (a < haystack.size() && b < needle.size()) {
            if (haystack[a] == needle[b]) {
                res = a;
                while (a < haystack.size() && b < needle.size() &&
                       haystack[a] == needle[b]) {
                    a++;
                    b++;
                }
                if (b == needle.size())
                    return res;
                else {
                    b = 0;
                    a = res + 1;
                    res = -1;
                }
            } else {
                a++;
                b = 0;
            }
        }
        return res;
    }
};
