class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int TotalPoints = 0;
        int current_win_points = 0;
        int n = cardPoints.size() ; 
        int win_size =  n-k;
        int ans = 0;
        for (auto ele:cardPoints) TotalPoints += ele;
        for(int w = 0 ; w<win_size ; w++){
            current_win_points +=cardPoints[w] ; 
        }
        ans = TotalPoints - current_win_points ; 
        for(int w = win_size ; w<n ; w++){
              current_win_points = current_win_points + cardPoints[w] - cardPoints[w - win_size];
              ans = max(ans , TotalPoints - current_win_points );
        }
        return ans ; 
    }
};