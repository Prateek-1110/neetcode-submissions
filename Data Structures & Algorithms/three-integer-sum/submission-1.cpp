class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& v) {
        set<vector<int>> st;
        int n = v.size();
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            int l = i + 1, r = n - 1;
            while (r > l) {
                int sum = v[i] + v[l] + v[r];
                if (sum == 0) {
                    vector<int> res = {v[l], v[i], v[r]};
                    st.insert(res);
                    l++;
                    r--;
                } else if (sum > 0)
                    r--;
                else
                    l++;
            }
        }
        vector<vector<int>> ans;
        for (auto& res : st) {
            ans.push_back(res);
        }
        return ans;
    }
};
