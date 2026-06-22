class Solution {
public:

    string encode(vector<string>& strs) {
        string ans ="";
        for(int i =0;i<strs.size();i++){
            ans += strs[i];
            ans +=".";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string res = "";
        for(int it =0;it<s.size();it++){
            if(s[it]!='.')res +=s[it];
            else {
                ans.push_back(res);
                res = "";
            }
        }
        return ans;
    }
};
