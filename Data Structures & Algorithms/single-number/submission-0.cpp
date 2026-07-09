class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xori = 0;
        for(int it:nums){
            xori ^=it;
        }
        return xori;
    }
};
