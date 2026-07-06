class Solution {
   public:
    int canCompleteCircuit(vector<int>& v, vector<int>& cost) {
        int total = 0, tank = 0, start = 0;
        for (int i = 0; i < v.size(); i++) {
            int diff = v[i] - cost[i];
            total += diff;
            tank += diff;
            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }

        return (total >= 0) ? start : -1;
    }
};
