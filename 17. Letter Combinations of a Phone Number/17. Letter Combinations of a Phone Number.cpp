class Solution {
public:
    map<char, std::string>kb = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> ans;
    void rec(int idx , string tmp,string digs){
        if (idx==digs.size()){
            ans.push_back(tmp);
            return;
        }
        for(char &i:kb[digs[idx]]){
            tmp.push_back(i);
            cout<<tmp;
            rec(idx+1 , tmp, digs);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits=="")return {};
        string tmp;

        rec(0 , tmp, digits);
        return ans;
    }
};