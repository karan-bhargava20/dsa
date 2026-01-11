class Solution {
    void rev(vector<int>& v , int s , int e){
        while(s<e){
            swap(v[s++],v[e--]);
        }
    }
public:
    void rotate(vector<int>& v, int k) {
        int n = v.size();
        k=k%n;
        rev(v,0,n-1);
        rev(v,0,k-1);
        rev(v,k,n-1);
    }
};