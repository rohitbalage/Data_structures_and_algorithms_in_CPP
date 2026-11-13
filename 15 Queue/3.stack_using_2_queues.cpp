#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Implement a stack class using 2 queues
class Stack
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        // Always push to q1
        q1.push(x);
    }

    void pop()
    {
        if (empty()) return;

        // Leave only the last element in q1, move the rest to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Remove the last element (which is the top of the stack)
        q1.pop();

        // Swap q1 and q2 to restore state
        swap(q1, q2);
    }

    int top()
    {
        if (empty()) return -1;

        // Leave only the last element in q1, move the rest to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);
        q1.pop();

        // Swap q1 and q2 to restore state
        swap(q1, q2);

        return topElement;
    }

    bool empty()
    {
        return q1.empty() && q2.empty();
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop(); // Added missing semicolon
    }

    return 0;
}