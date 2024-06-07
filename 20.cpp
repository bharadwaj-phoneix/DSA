class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                c.push(s[i]);
            }
            else if(c.empty()||(s[i]==')'&& c.top()!='(')||(s[i]=='}'&& c.top()!='{')||(s[i]==']'&& c.top()!='[')){
                return 0;
            }
            else{
                c.pop();
            }
        } 
        return c.empty()?1:0;
    }
};
