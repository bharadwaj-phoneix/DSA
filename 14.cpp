class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n = strs.size();
        if(n == 0) return "";
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[n-1];
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                res+=a[i];
            }
            else{
                break;
            }
        }
        return res;
    }
};
