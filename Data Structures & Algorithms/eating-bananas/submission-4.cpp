class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
            int n = v.size();
                int l = 1; // speed begin from 1 to max element
                    int r = *max_element(v.begin(), v.end());// max speed to eat
                        int ans;
                            while (l <= r){
                                    long long cnt = 0;
                                            int mid = (l + r) / 2;
                                                    for (int i = 0; i < n; i++){
                                                                cnt += v[i] / mid;
                                                                            if (v[i] % mid != 0) cnt++;// performing ceil of function (11/4 ->3)
                                                                                    }
                                                                                            if (cnt > h) l = mid + 1; // speed is slow
                                                                                                    else{ // speed is fast ( it is potential answer so store in ans & do r = mid-1)
                                                                                                                r = mid - 1;
                                                                                                                            ans = mid;
                                                                                                                                    }
                                                                                                                                        }
                                                                                                                                            return ans;
                                                                                                                                            }
    
};
