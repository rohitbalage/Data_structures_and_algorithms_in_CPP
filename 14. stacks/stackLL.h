#include <stdexcept>

template <typename T>
class Node
{
public:
    T data;
    Node<T>* next;

    Node(T d)
    {
        data = d;
        next = nullptr;
    }
};

template <typename T>
class Stack
{
private:
    Node<T>* head;

public:
    Stack()
    {
        head = nullptr;
    }

    void push(T data)
    {
        Node<T>* newNode = new Node<T>(data);

        newNode->next = head;
        head = newNode;
    }

    bool empty() const
    {
        return head == nullptr;
    }

    T top() const
    {
        if (empty())
        {
            throw std::underflow_error("Stack is empty");
        }

        return head->data;
    }

    void pop()
    {
        if (head != nullptr)
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    ~Stack()
    {
        while (!empty())
        {
            pop();
        }
    }
};