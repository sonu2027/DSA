#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int data)
    {
        this->data = data;
    }
};

class Stack
{
    Node *head = NULL;
    int length = 0;

public:
    void push(int data)
    {
        length++;
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return EXIT_SUCCESS;
        }
        return head->data;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stacj underflow" << endl;
            return;
        }
        length--;
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int size()
    {
        return length;
    }
    bool empty()
    {
        return length == 0;
    }
};
int main()
{
    Stack s1;
    cout << s1.empty() << endl;
    cout << s1.size() << endl;
    s1.push(6);
    cout << s1.empty() << endl;
    cout << s1.size() << endl;
    s1.push(96);
    cout << s1.size() << endl;
    s1.push(60);
    cout << s1.size() << endl;
    s1.pop();
    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    cout << s1.top() << endl;
}