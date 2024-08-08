class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void rec(vector<int>& nums,int idx,vector<int>& tmp){
        ans.push_back(tmp);
        for (int i=idx;i<n;i++){
            if(i>idx and nums[i]==nums[i-1])continue;
            tmp.push_back(nums[i]);
            rec(nums,i+1,tmp);
            tmp.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // vector<vector<int>> ans;
         n = nums.size();
        //  sort(nums.begin(), nums.end());
         vector<int> tmp;
        sort(nums.begin(),nums.end());
        rec(nums,0,tmp);
        return ans;
    }
};