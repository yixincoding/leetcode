#include <iostream>
#include <string>
#include <cstring>
#include <queue>
using namespace std;


class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        mystack.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        queue<int> backstack;
        int index=0;
        int size=mystack.size();
        while (index<size-1)
        {
            int x=mystack.front();
            backstack.push(x);
            mystack.pop();
            index++;
        }
        mystack.pop();
        while (!backstack.empty())
        {
            int x=backstack.front();
            mystack.push(x);
            backstack.pop();
        }
    }

    // Get the top element.
    int top() {
        return mystack.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return mystack.empty();
    }

private:
    queue<int> mystack;
};
int main()
{
	Stack s;
	s.push(3);
	s.push(2);
	s.push(1);
	s.push(4);
	cout<< s.top()<<endl;
	s.pop();
	cout<< s.top()<<endl;
	s.pop();
	cout<< s.top()<<endl;
	s.pop();
	cout<< s.top()<<endl;
	s.pop();
}