
class Solution {
public:
    bool check (vector<int>& bl,int day,int m, int k){
        int fc=0,bc=0;
        for (int j = 0; j < bl.size(); j++) {
            if (bl[j] <= day) {
                fc++;
                if (fc == k) { // Enough adjacent flowers for a bouquet
                    bc++;
                    fc = 0; // Reset flower count for the next bouquet
                    if (bc == m) return true; // Found enough bouquets
                }
            } 
            else {
                fc = 0; // Reset flower count if a flower cannot be used
            }
        }
         return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)m*k>bloomDay.size())return -1;
        // auto minmax = minmax_element(bloomDay.begin(), bloomDay.end());
        int l=*min_element(bloomDay.begin(), bloomDay.end()) ,r=*max_element(bloomDay.begin(), bloomDay.end());
        while (l<r){
            int mid=l+(r-l)/2;
            if (check(bloomDay,mid,m,k))r=mid;
            else l=mid+1;
        }
        return l;
    }
};