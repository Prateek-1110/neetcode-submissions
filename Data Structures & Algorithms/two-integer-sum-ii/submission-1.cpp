class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        int n = v.size();
        int l = 0 , r = n-1;
        while(l<r){
            int sum = v[l]+v[r];
            if(sum==k) return {l+1,r+1};
            else if (sum>k)r--;
            else l++;
        }
        return {-1,-1};
        
    }
};
