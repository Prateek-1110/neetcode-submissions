class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        int pre = 1, suff = 1;
        vector<int>ans(n,1);
        for(int i =0;i<n;i++){
            ans[i]= ans[i]*pre;
            pre = pre*v[i];
            ans[n-i-1]=suff*ans[n-i-1];
            suff =suff*v[n-1-i];
        }
        return ans;
    }
};
