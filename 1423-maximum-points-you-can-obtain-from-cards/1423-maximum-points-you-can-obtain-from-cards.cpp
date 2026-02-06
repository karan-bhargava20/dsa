class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Total = 0 , curr = 0 ,ans = 0  ;
        int n = cardPoints.size() ; 

        for(auto x:cardPoints) Total += x;

        for(int w = 0 ; w<n-k ; w++){
            curr +=cardPoints[w] ; 
        }
        ans = Total - curr ;
        for(int i =n-k ; i<n ; i++){
            curr += cardPoints[i]-cardPoints[i-n+k];
            ans = max (ans ,Total - curr);
        }
        return ans ; 
    }
};