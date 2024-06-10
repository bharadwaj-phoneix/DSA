class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>count(101,0);
        int i=1,j=0;
        int mismatch = 0;
        for(int i=0;i<heights.size();i++){
            count[heights[i]]++;
        }
        while(i<101){
            if(count[i]==0){
                i++;
            }
            else{
                if(i!=heights[j]) mismatch++;
                j++;
                count[i]--;
            }
        }
        return mismatch;
    }
};
