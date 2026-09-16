#include <iostream>
#include <stack>
using namespace std;


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

void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }

    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,t);

}

int main()


{

stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

reverse(s);

 while(!s.empty())
 {
    cout << s.top()<< endl;
    s.pop();
 }
    return 0;
}