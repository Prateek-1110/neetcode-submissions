class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>> p = v;
        sort(p.begin(),p.end());
        vector<vector<int>>ans;
        ans.push_back(p[0]);
        for(int i =0;i<n;i++){
            if(ans.back()[1]>=p[i][0]) ans.back()[1]= max(ans.back()[1],p[i][1]);
            else ans.push_back(p[i]);
        }
        return ans;
    }
};
