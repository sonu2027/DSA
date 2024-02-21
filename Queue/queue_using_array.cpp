#include <iostream>
using namespace std;

class Queue
{
public:
    int arr[5];
    int length = 0;
    int top = 0;
    void push(int data)
    {
        if (length == 5)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[length++] = data;
    }
    void pop()
    {
        if (length == 0 || top == length)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        top++;
    }
    int front()
    {
        if (length == 0 || top == length)
            return -1;
        return arr[top];
    }
    int size()
    {
        return length - top;
    }
};

int main()
{
    Queue q1;
    q1.push(5);
    q1.push(7);
    cout << q1.front() << endl;
    q1.pop();
    cout << q1.front() << endl;
    q1.pop();
    cout << q1.front() << endl;
    // q1.pop();
}