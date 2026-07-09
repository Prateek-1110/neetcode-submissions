class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>mpp;
        int res = 0 , l = 0 , mx =0;
        for(int i =0;i<s.size();i++){
            mpp[s[i]]++;
            mx = max(mx , mpp[s[i]]);
            while((i-l+1)-mx>k){
                mpp[s[l]]--;
                l++;
            }
            res = max(res,i-l+1);
        }
        return res;
    }
};
