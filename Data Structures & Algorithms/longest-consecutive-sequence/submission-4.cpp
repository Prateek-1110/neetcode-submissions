class Solution {
   public:
    int longestConsecutive(vector<int>& v) {
        int n = v.size();
        if(n==0)return 0;
        sort(v.begin(), v.end());
        int maxi = 1, curr = 1;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) continue;
            if (v[i + 1] == v[i] + 1) {
                curr++;
                maxi = max(maxi, curr);
            } else
                curr = 1;
        }
        return maxi;
    }
};
