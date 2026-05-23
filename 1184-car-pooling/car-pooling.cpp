class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       vector<int>currPassenger(1001,0);
       for(int i=0 ; i<trips.size() ; i++){
        int numPassengersi = trips[i][0];
        int fromi = trips[i][1];
        int toi = trips[i][2];
        currPassenger[fromi] += numPassengersi;
        currPassenger[toi] -= numPassengersi;
       }
       for(int i=1 ; i<currPassenger.size() ; i++){
            currPassenger[i] += currPassenger[i-1];
       }
       for(int i=0 ; i<currPassenger.size() ; i++){
            if(currPassenger[i]>capacity){
                return false;
            }
       }
       return true;
         
    }
};
            
