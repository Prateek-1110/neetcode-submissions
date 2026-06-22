class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& v) {
// r->row , c->col, b->box(square)
        vector<set<char>> r(9), c(9), b(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char ch = v[i][j];
// board is empty
                if (ch == '.') continue; 
// finds the correct square to check if any digit is duplicated or not
                int sq = (i / 3) * 3 + (j / 3); 
// element is repeated in row,col, box , in any of these
                if (r[i].count(ch) || c[j].count(ch) || b[sq].count(ch)) return false;
// ch is not repeated so add in r[i],c[j] & b[sq] for further comparison
                r[i].insert(ch);
                c[j].insert(ch);
                b[sq].insert(ch);
            }
        }
        return true;
    }
};