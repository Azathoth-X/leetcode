static const auto __boost = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int b=accumulate(piles.begin(),piles.end(),0);
        // int n=piles.size();
        int l=1,r=*max_element(piles.begin(),piles.end());

        while(l<=r){
            long int hn=0;
            int mid=l+(r-l)/2;
            for (int pile:piles)hn+=ceil((double)pile/mid);
            // if (==b) return mid;
            if (hn<=h) r=mid-1;
            else l=mid+1;
        }

        return l;
    }
};