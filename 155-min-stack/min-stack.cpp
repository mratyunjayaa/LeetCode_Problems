class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {}

    void push(int value) {
        long long x = value;
        if (st.empty()) {
            st.push(x);
            mini = x;
        } else if (x < mini) {
            st.push(2 * x - mini);
            mini = x;
        } else
            st.push(x);
    }

    void pop() {
        if (st.empty())
            return;
        long long topelem = st.top();
        st.pop();
        if (topelem < mini) {
            mini = 2 * mini - topelem;
        }
    }

    int top() {
        if (st.empty())
            return -1;
        long long topelem = st.top();
        if (topelem < mini)
            return mini;
        return topelem;
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */