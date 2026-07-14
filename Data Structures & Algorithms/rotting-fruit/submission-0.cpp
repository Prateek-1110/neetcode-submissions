class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        queue<pair<int, int>> q;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 2) q.push({i, j});
                else if (v[i][j] == 1) cnt++;
            }
        }
        if (cnt == 0) return 0;
        int time = 0;
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, -1, 0, 1};

        while (!q.empty()) {
            int size = q.size();
            bool f = false;
            while (size--) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int nr = row + dr[i];
                    int nc = col + dc[i];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] == 1) {
                        v[nr][nc] = 2;
                        cnt--;
                        q.push({nr, nc});
                        f = true;
                    }
                }
            }
            if (f) time++;
        }
        return (cnt == 0) ? time : -1;
    }
};