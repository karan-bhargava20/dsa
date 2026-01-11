class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int j = 0;
        while(j<v.size() && v[j]!=0){
            j++;
        }
        int i=j+1;
        while(i<v.size()){
            if(v[i]!=0){
                v[j++]=v[i];
            }
            i++;
        }
        while(j<v.size()){
            v[j++]=0;
        }   
    }
};