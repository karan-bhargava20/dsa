class Solution {
public:
    double Median(vector<int>& nums1, vector<int>& nums2 , int med_idx , int check , int m , int n ){

        int i = 0;
        int j = 0;
        int idx = -1;

        double prev = 0.0 ; 
        double median = 0.0 ;

        while(i < m && j < n){
            if( nums1[i] <= nums2[j] ) {
                median = nums1[i];
                i++;
                idx++;
            }else{
                median = nums2[j];
                j++;
                idx++;
            }

            if( idx == med_idx ){
                return (check) ? median: (median + prev)/2;
            }
            prev = median;
        }
        while( j<n ){
            median = nums2[j];
            j++;
            idx++;
            if( idx == med_idx ){
                return (check) ? median: (median + prev)/2;
            }
            prev = median;
        }
        while( i<m ){
            median = nums1[i];
            i++;
            idx++;
            if( idx == med_idx ){
                return (check) ? median: ( median + prev )/2;
            }
            prev = median;
        }
        return 0.0;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();
        int M = m+n;
        int M_idx = M/2;
        return (M&1) ? Median( nums1 , nums2 , M_idx , 1 , m ,n ) : Median( nums1 , nums2 , M_idx , 0 , m , n); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna