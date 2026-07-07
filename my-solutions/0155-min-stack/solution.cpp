class MinStack {
public:
    MinStack() {
        
    }
    stack <long long> st;
    long long min;
    void push(int value) {
        if (st.empty()){
            st.push(value);
            min = 1ll*value;
        }
        else{
            if(value >= min) st.push(value);
            else{
                st.push(1ll*2*value - min);
                min = 1ll*value;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;

        long long x = 1ll* st.top();
        st.pop();

        if(x < min){
            min = 1ll*2*min - x;
        }
    }
    
    int top() {
        if(st.empty()) return NULL;

        long long x = st.top();
        if(x >= min) return x;

        return 1ll*min;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
