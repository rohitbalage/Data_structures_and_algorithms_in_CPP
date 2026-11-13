#include <iostream>
#include <stack>
using namespace std;

/** Challenge: insert at stack bottom */

void insertAtBottom(stack<int>& s, int data)
{
    // Base case: stack is empty
    if (s.empty())
    {
        s.push(data);
        return;
    }

    // Remove the top element
    int temp = s.top();
    s.pop();

    // Recursively insert at the bottom
    insertAtBottom(s, data);

    // Restore the removed element
    s.push(temp);
}

int main()
{
    std::stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    insertAtBottom(s, 10);

    while (!s.empty())
    {
        cout << s.top() <<endl;
        s.pop();
    }

    return 0;
}