class MinStack {
    stack<long long> st;
    long long mini;

public:
    MinStack() {
        mini = 0;
    }

    void push(int val) {
        if (st.empty()) {
            mini = val;
            st.push(val);
        }
        else if (val < mini) {
            st.push(2LL * val - mini);
            mini = val;
        }
        else {
            st.push(val);
        }
    }

    void pop() {
        if (st.empty()) return;

        long long top = st.top();
        st.pop();

        if (top < mini) {
            mini = 2LL * mini - top;
        }
    }

    int top() {
        long long x = st.top();

        if (x < mini)
            return mini;

        return x;
    }

    int getMin() {
        return mini;
    }
};