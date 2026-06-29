class Solution {
   public:
    double findMedianSortedArrays(vector<int>& v, vector<int>& a) {
        vector<int> res(v.begin(), v.end());
        for (int i = 0; i < a.size(); i++) res.push_back(a[i]);
        sort(res.begin(), res.end());
        if (res.size() & 1)return double(res[res.size() / 2]);
        else return double((res[(res.size() - 1) / 2] + res[res.size() / 2]) / 2.0);
    }
};
