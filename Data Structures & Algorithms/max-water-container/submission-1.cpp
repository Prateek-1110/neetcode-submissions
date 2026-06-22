class Solution {
public:
    int maxArea(vector<int>& v) {
        int n =v.size();
        int maxi =0 , cnt =0;
        int l = 0 ,r = n-1;
        while(r>l){
            cnt =0;
            if(v[r]>v[l]){
                cnt += (r-l)*v[l];
                l++;
            }
            else if (v[l]==v[r]) {
                cnt += (r-l)*v[l];
                l++;
                r--;
            }
            else  if (v[l]>v[r]) {
                cnt +=(r-l)*v[r];
                r--;
            }
            maxi = max(cnt,maxi);
        }
        return maxi;
    }
};
