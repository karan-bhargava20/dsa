class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int count = 0;
        int maxi = 0;
        for(int i = 0 ; i<n ; i++){
            if(!grumpy[i]){
                count += customers[i];
            }
        }
        // window 
        for(int r = 0 ; r<minutes ; r++){
             if(grumpy[r]){
                count += customers[r];
            }
        }
        maxi = max(maxi , count);
        for(int r = minutes ; r<n ; r++){
            if(grumpy[r-minutes]){
                count -= customers[r-minutes];
            }
             if(grumpy[r]){
                count += customers[r];
            }
            maxi = max(maxi , count);
        }
        return maxi;
    }
};