#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> arr;

public:
    void push(T data)
    {
        arr.push_back(data);
    }

    void pop()
    {
        if (empty())
        {
            throw underflow_error("Stack is empty");
        }

        arr.pop_back();
    }

    T top() const
    {
        if (empty())
        {
            throw underflow_error("Stack is empty");
        }

        int lastIdx = arr.size() - 1;
        return arr[lastIdx];
    }

    bool empty() const
    {
        return arr.empty();
    }
};