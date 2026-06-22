class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        int n = v.size();
        map<int,int>mpp;
        for(int i =0;i<n;i++){
            int rem = k-v[i];
            if(mpp.find(rem)!=mpp.end()) return {mpp[k-v[i]],i};
            else mpp[v[i]]=i;
        }
        return {-1,-1};
        
    }
};
