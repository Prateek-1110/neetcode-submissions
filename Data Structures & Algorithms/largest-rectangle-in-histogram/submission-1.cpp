class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
         int n = v.size();
        stack<int>st;
        int maxi = 0;
        for(int i = 0;i<=n;i++){
            int curr = (i==n)?0:v[i];
            while(!st.empty() && curr<v[st.top()] ){
                int h =v[ st.top()]; st.pop();
                int w = st.empty()?i:(i-st.top()-1);
                int area = h*w;
                maxi = max(maxi,area);
            }
        st.push(i);
        }
        return maxi;
    }
};
