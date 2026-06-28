class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        map<int,int> mpp;
        for(auto it : v) mpp[it]++;
        vector<pair<int,int>> vp(mpp.begin(), mpp.end());
        sort(vp.begin(), vp.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(vp[i].first);
        }
        return ans;
    }
};