class Solution {
public:
   void fn(int row, int col , vector<vector<int>>&vis, vector<vector<char>>&v ){
    vis[row][col]=1;
    int n = v.size();
    int m =v[0].size();
    int dr[] = {1,0,-1,0};
        int dc[] = {0,1,0,-1};
        for(int i =0;i<4;i++){
            int nr = dr[i]+ row;
            int nc = dc[i]+col;
            if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && v[nr][nc]=='O'){
                fn(nr,nc,vis,v);
            }
        }
}
void solve(vector<vector<char>>& v) {
    int n = v.size();
    int m = v[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i =0;i<m;i++){
        if(!vis[0][i] && v[0][i]=='O'){
            fn(0,i,vis,v);
        }
        if(!vis[n-1][i] && v[n-1][i]=='O'){
            fn(n-1,i,vis,v);
        }
    }
    for(int i =0;i<n;i++){
        if(!vis[i][0] && v[i][0]=='O'){
            fn(i,0,vis,v);
        }
        if(!vis[i][m-1] && v[i][m-1]=='O'){
            fn(i,m-1,vis,v);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(vis[i][j]==0 && v[i][j]=='O') v[i][j]='X';
        }
    }
}
};
