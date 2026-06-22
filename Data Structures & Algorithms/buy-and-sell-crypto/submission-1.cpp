class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int profit = 0;
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            mini = min(mini,v[i]);
            profit = max(profit,v[i]-mini);
        }
        return profit;
        
    }
};
