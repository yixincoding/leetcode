class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        if (mq.empty()) front=x;
        mq.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stack<int> tmq;
        while (!mq.empty())
        {
            tmq.push(mq.top());
            mq.pop();
        }
        tmq.pop();
        if (!tmq.empty()) front = tmq.top();
        while (!tmq.empty())
        {
            mq.push(tmq.top());
            tmq.pop();
        }
        
    }

    // Get the front element.
    int peek(void) {
        return front;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return mq.empty();
    }
private:
    stack<int> mq;
    int front;
};