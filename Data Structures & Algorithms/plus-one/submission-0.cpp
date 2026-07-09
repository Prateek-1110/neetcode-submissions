class Solution {
   public:
    vector<int> plusOne(vector<int>& v) {
        int one = 1, i = 0;
        reverse(v.begin(), v.end());
        while (one) {
            if (i < v.size()) {
                if (v[i] == 9)
                    v[i] = 0;

                else {
                    v[i] += 1;
                    one = 0;
                }
            } else {
                v.push_back(one);
                one = 0;
            }
            i++;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
