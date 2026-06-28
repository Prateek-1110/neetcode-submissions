class Solution {
public:
    bool isNStraightHand(vector<int>& v, int k) {
        int n = v.size();
        if (n % k != 0) return false;
        map<int, int> mp;
        for (int x : v) mp[x]++;
        while (!mp.empty()) {
            int start = mp.begin()->first;
            for (int i = 0; i < k; i++) {
                int card = start + i;
                if (mp.find(card) == mp.end()) return false;
                mp[card]--;
                if (mp[card] == 0) mp.erase(card);
            }
        }
        return true;
    }
};
