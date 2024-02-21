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
    ~Node()
    {
        delete next;
    }
};

void insertNode(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void printNode(Node *head)
{
    cout << "List are: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtBegining(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtPosition(int position, int data, Node *&head)
{
    if (position == 0)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        return;
    }

    int count = 1;
    Node *curr = head;
    while (count < position)
    {
        curr = curr->next;
        count++;
    }

    if (curr->next == NULL)
    {
        Node *temp = new Node(data);
        curr->next = temp;
    }
    else
    {
        Node *forward = curr->next;
        Node *temp = new Node(data);
        curr->next = temp;
        temp->next = forward;
    }
}

void deleteNode(int position, Node *&head)
{
    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int count = 0;
    Node *prev = NULL;
    Node *curr = head;
    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    Node *temp = curr->next;
    prev->next = temp;
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *head = new Node(8);
    Node *tail = head;

    // Creating a array
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Inserting Node in last in LL
    for (int i = 0; i < n; i++)
        insertNode(tail, arr[i]);

    // Deleting memory in heap
    delete[] arr;

    // Creating a array
    cout << "Enter the length of array: ";
    cin >> n;
    arr = new int[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Inserting Node in begining in LL
    for (int i = 0; i < n; i++)
        insertAtBegining(head, arr[i]);

    // Deleting memory in heap
    delete[] arr;

    // Insert Node at any position in LL
    insertAtPosition(0, 23, head);

    // Delete node in linked list
    deleteNode(4, head);

    // Printing linked list data
    printNode(head);

    // Deleting memory in heap
    delete head;

    cout << "Operation Successfull";
}