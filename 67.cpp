class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int A = a.length(),B=b.length();
        int i = A,j=B;
        int c=0;
        while(i>j){
            b = "0" + b;
            i--;
        }
        while(j>i){
            a = "0" + a;
            j--;
        }
        int n = max(A,B);
        for(int i=n-1;i>=0;i--){
            int t = a[i]-'0';
            int h = b[i]-'0';
            int s = t^h^c;
            c = (t&h) | (h&c) | (c&t);
            if(s==1){
                res.push_back('1');
            }
            else{
                res.push_back('0');
            }
        }
        if(c==1) res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};
