class Solution {
public:
    int removeElement(vector<int>& v, int val){
        auto itr = find(v.begin(),v.end(),val);
        int i = itr - v.begin();;
        int e = v.size()-1;
        while(i<e && itr!=v.end()){
            while(e >0 && v[e] == val ){
                 e--;
            }
            if(i<e){
            swap(v[e],v[i]);
            }
            itr = find(v.begin(),v.end(),val);
            i = itr - v.begin();
            
        }
        return i ;   
    }
};