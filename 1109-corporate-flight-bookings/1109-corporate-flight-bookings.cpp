class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>answer(n,0);
        for(int i=0 ; i<bookings.size() ; i++){
            int firsti = bookings[i][0];
            int lasti  = bookings[i][1];
            int seatsi = bookings[i][2];
            if(firsti-1<n){
            answer[firsti-1] += seatsi;
            }
            if(lasti<n){
            answer[lasti]  -= seatsi;
            }
        }
        for(int i=1 ; i<n ; i++){
            answer[i] += answer[i-1];
        }
        return answer;
    }
};