class MinStack {
public:
    void push(int x) {
        ms.push(x);
        if (min.empty() || x<=min.top()) min.push(x);
    }

    void pop() {
        if (ms.top() == min.top()) min.pop();
        ms.pop();
    }

    int top() {
        if (ms.empty()) return 0;
        return ms.top();
    }

    int getMin() {
        return min.top();
    }
private:
    stack<int> ms;
    stack<int> min;
};