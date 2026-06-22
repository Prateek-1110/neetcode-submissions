class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
       map<string,vector<string>>mpp;
       for(auto it:s){
        string ans = it;
// it makes every string in same order for comparison
        sort(ans.begin(),ans.end()); 
//adding current string into its index ( stored sorted string)
        mpp[ans].push_back(it);
       }
       vector<vector<string>>res;
       for(auto &it:mpp)res.push_back((it.second));
       return res;
    }
};
