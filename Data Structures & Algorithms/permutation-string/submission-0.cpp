class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        if (m > n) return false;
        vector<int> f1(26, 0), f2(26, 0);
        for (int i = 0; i < m; i++) {
            f1[s1[i] - 'a']++;
            f2[s2[i] - 'a']++;
        }
        if (f1 == f2) return true;
        for (int i = m; i < n; i++) {
            f2[s2[i] - 'a']++;
            f2[s2[i - m] - 'a']--;
            if (f1 == f2) return true;
        }
        return false;
    }
};
