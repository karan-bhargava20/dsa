class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>basket;
        int left = 0 , cnt = 0 , ans = 0;
        
        for(int fruit = 0 ; fruit < fruits.size() ; fruit++){
            basket[fruits[fruit]]++;
            cnt++;
            if(basket.size() > 2){
                if(--basket[fruits[left]]==0){
                    basket.erase(fruits[left]);
                }
                cnt--;
                left++;
            }
            if(basket.size() <= 2){
                ans=cnt;
            }
        }
        return ans;
    }
};