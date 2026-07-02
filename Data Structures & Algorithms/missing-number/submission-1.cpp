class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss =0;
        sort(nums.begin(),nums.end());
        for(auto it:nums){
            if (miss==it)miss++;
        }
        return miss;
    }
};
