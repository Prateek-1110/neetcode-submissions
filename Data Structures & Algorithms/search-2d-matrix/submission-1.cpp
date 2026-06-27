class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        int n = v.size();
        int m = v[0].size();
        for(int i =0;i<n;i++)for(int j =0;j<m;j++)if(v[i][j]==k)return true;
        return false;
    }
};
