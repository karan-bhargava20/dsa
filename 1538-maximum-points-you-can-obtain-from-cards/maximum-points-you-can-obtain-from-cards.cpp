class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Total = 0 , curr = 0 ,ans = 0  ;
        int n = cardPoints.size() ; 
        int win_size = n-k;
        for(auto x:cardPoints) Total += x;

        for(int w = 0 ; w<win_size ; w++){
            curr +=cardPoints[w] ; 
        }
        ans = Total - curr ;
        for(int i =win_size ; i<n ; i++){
            curr += cardPoints[i]-cardPoints[i-win_size];
            ans = max (ans ,Total - curr);
        }
        return ans ; 
    }
};