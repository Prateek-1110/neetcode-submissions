class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int>r(n,0),c(m,0);
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(v[i][j]==0){
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        for(int i =0;i<n;i++){
            if(r[i]==1){
                for(int j = 0;j<m;j++) v[i][j]=0;
            }
        }
         for(int i =0;i<m;i++){
            if(c[i]==1){
                for(int j = 0;j<n;j++) v[j][i]=0;
            }
        }
    }
};
