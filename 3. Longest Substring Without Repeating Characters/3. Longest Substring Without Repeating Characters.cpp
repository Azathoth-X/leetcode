class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,l=0;
        vector<int> lastIndex(128, -1);  
        for(int r=0;r<s.size();r++){
            if(lastIndex[s[r]]!=-1){
                l=max(l,lastIndex[s[r]]+1);
            }
            lastIndex[s[r]]=r;
            mx=max(mx,r-l+1);
        }

        return mx;
        
    }
};