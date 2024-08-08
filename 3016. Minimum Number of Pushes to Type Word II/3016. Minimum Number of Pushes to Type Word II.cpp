
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> ch(26,0);
        for (char& a:word){
            ch[a-'a']++;
        }
        // cout<<ch;
        sort(ch.rbegin(),ch.rend());
        int tf=0;
        for (int i = 0; i < 26; ++i){
            // cout<<i;
            if(ch[i]>0)tf+=(i/8+1)*ch[i];
            else break;
        }
        return tf;

    }
};