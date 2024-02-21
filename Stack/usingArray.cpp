#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int length;
    int topIndex = -1;

public:
    Stack(int length)
    {
        this->length = length;
        arr = new int[length];
    }

    void push(int data)
    {
        if (topIndex == length - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            topIndex++;
            arr[topIndex] = data;
        }
    }

    int top()
    {
        if (topIndex == -1)
        {
            cout << "Stack is empty" << endl;
            return EXIT_SUCCESS;
        }
        return arr[topIndex];
    }
    void pop()
    {
        if (topIndex == -1)
            cout << "Stack underflow" << endl;
        else
            topIndex--;
    }
    int size()
    {
        return topIndex + 1;
    }
    bool empty()
    {
        return topIndex==-1;
    }
};
int main()
{
    Stack s1(10);
    s1.top();
    // s1.push(1);
    // cout << s1.top() << endl;
    // cout << s1.size() << endl;
    // cout << s1.empty() << endl;

    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    // s1.push(-10);
    // s1.push(11);
    // cout << s1.top() << endl;
    // cout << s1.size() << endl;
    // cout << s1.empty() << endl;
}