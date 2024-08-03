
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r= nums.size()-1;
        while(l<r){
            int mid =l+(r-l)/2;
            if (nums[mid]>nums[r]){l=mid+1;}
            // if (nums[mid]>nums[l]&&nums[mid]<nums[r])return nums[l];
            else {r=mid;}
        }
        return nums[l];
        
    }
};