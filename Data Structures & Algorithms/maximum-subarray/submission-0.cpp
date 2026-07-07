class Solution {
public:
    int maxSubArray(vector<int>& v) {
          int n = v.size();
        int mx =v[0],sum = v[0];
        for(int i = 1;i<n;i++){
            sum = max(v[i],sum+v[i]);
            mx = max(sum , mx);
        }
        return mx;
        
    }
};
