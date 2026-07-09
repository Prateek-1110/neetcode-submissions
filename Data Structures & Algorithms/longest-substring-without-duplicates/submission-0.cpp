class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int>mpp;
    int n = s.size();
    if(n==0)return 0;
    int l = 0 , r = 0;
    int cnt =1 ,mx=1;
    while(r<n){
        if(mpp.find(s[r])!=mpp.end()) {
            while (mpp[s[r]]!=0){
                mpp[s[l]]--;
                l++;
            }
        }
        mpp[s[r]]++; 
        r++;
        cnt  = r-l;
        mx = max (cnt,mx);
    }
    return mx;
    }
};
