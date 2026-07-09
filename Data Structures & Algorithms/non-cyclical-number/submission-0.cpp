class Solution {
public:
int f(int n ){
    int ans = 0;
    while(n>0){
        int digi = n%10;
        digi = digi*digi;
        ans +=digi;
        n/=10;
    }
    return ans;
}
    bool isHappy(int n) {
        set<int>st;
        while(st.find(n)==st.end()){
            st.insert(n);
            n = f(n);
            if(n==1)return true;
        }
        return false;
    }
};
