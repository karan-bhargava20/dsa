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
       
       for(int i=1 ; i<1001 ; i++){
            currPassenger[i] += currPassenger[i-1];
            if(currPassenger[i-1]>capacity){
                return false;
            }
       }
       if(currPassenger[1000]>capacity){
                return false;
            }
       return true;
         
    }
};
            
