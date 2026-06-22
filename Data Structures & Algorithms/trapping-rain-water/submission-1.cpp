class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        vector<int> l(n), r(n);
        int maxi = v[0];
        l[0] = v[0];
        for(int i = 1; i < n; i++) {
            maxi = max(maxi, v[i]);
            l[i] = maxi;
        }

        maxi = v[n-1];
        r[n-1] = v[n-1];
        for(int i = n-2; i >= 0; i--) {
            maxi = max(maxi, v[i]);
            r[i] = maxi;
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans += min(l[i], r[i]) - v[i];
        }

        return ans;
    }
};