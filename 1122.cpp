class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map <int,int> m;
        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        int j=0;
        for(int i=0;i<arr2.size();i++){
            while(m[arr2[i]]>0){
                arr1[j] = arr2[i];
                j++;
                m[arr2[i]]--; 
            }
        }
        for(int i=0;i<1001;i++){
            while(m[i]>0){
                arr1[j] = i;
                m[i]--;
                j++;
            }
        }
        return arr1;
    }
};
