class Solution {
public:
    int maxProfit(vector<int>&v) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for(auto rs :v){
            //min_price share choose
            min_price = min(min_price,rs);
            // profit calculate with current share
            int defference = rs - min_price;
            //max_progit cal  and update
            if(defference > max_profit){
                max_profit = defference;
            }    
        }
        return max_profit;
    }
};