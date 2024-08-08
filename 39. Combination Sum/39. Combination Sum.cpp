
class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void rec(int idx,int tg,vector<int>& v,int n,vector<int>& candidates){
        if (idx== n){
            if(tg==0)ans.push_back(v);
            return;
        }
        
        if (candidates[idx]<=tg){
            v.push_back(candidates[idx]);
            rec(idx,tg-candidates[idx],v,n,candidates);//add
            v.pop_back();
        }
        rec(idx+1,tg,v,n,candidates);//skip
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        n=candidates.size();
        vector<int> v;
        rec(0,target,v,n,candidates);
        return ans;
    }
};