class Solution {
public:
    int search(vector<int>& v, int k) {
        for(int i =0;i<v.size();i++)if(v[i]==k)return i;
        return -1;
        
    }
};
