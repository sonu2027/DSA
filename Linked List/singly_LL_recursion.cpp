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

void insertNode(Node *&tail, int *arr, int start, int end)
{
    if (start == end)
        return;

    Node *temp = new Node(arr[start]);
    tail->next = temp;
    tail = temp;

    insertNode(tail, arr, start + 1, end);
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

void insertAtBegining(Node *&head, int *arr, int start, int end)
{
    if (start == end)
        return;

    Node *temp = new Node(arr[start]);
    temp->next = head;
    head = temp;

    insertAtBegining(head, arr, start + 1, end);
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
    insertNode(tail, arr, 0, n);

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
    insertAtBegining(head, arr, 0, n);

    // Deleting memory in heap
    delete[] arr;

    // Printing linked list data
    printNode(head);

    // Deleting memory in heap
    delete head;

    cout << "Operation Successfull";
}