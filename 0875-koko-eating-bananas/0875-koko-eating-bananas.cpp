class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;//min speed 
        int e = *max_element(piles.begin() , piles.end() );//max speed
        while(s<=e){
            int mid = s + (e-s)/2; // speed select in search space
            long long  kokohrs = 0 ;
            for(auto p : piles){
                kokohrs+=(p+mid-1)/mid ; 
            }
            if(kokohrs <= h){
                e = mid-1;
            }
            else{
                s = mid + 1 ; 
            }
        }
        return s ;
    }
};