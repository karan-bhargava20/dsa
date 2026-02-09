class Solution {
int Atmost(vector<int>& a , int k){
    vector<int> mp(a.size()+1,0);
    int l = 0 ;
    int once_appear = 0;
    int ans = 0 ;
    for(int r = 0 ; r<a.size() ; r++){
        if(mp[a[r]]++ == 0) once_appear++;
        while(once_appear>k){
            if(--mp[a[l]] == 0){
                once_appear--;
            }
            l++;
        }
        ans+=r-l+1;
    }
    return ans ; 
}
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return Atmost(nums , k) - Atmost(nums , k-1);
    }
    
};