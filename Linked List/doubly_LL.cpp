#include <iostream>
using namespace std;

// Creating linked list class
class Node
{
public:
    int data;
    Node *prev = NULL;
    Node *next = NULL;

    Node(int data)
    {
        this->data = data;
    }
};

// Printing all node from start to end
void printNodeFromHead(Node *head)
{
    cout << "printing Node From Head: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Printing all node from end to start
void printNodeFromTail(Node *tail)
{
    cout << "printing Node From Tail: ";
    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

// Inserting Node at end
void insertNodeAtEnd(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

// Inserting Node at begining
void insertNodeAtStart(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    temp->next = head;
    head->prev = temp;
    head = temp;
}

// Inserting Node at any position
void insertNodeAtAnyPosition(Node *&head, Node *&tail, int data, int pos)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else if (pos <= 0)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
        return;
    }

    Node *curr = head;
    while (pos-- && curr != NULL)
        curr = curr->next;

    if (curr == NULL)
    {
        temp->next = curr;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        return;
    }

    temp->next = curr;
    temp->prev = curr->prev;
    curr->prev->next = temp;
    curr->prev = temp;
}

// Deleting first node
void deleteFirstNode(Node *&head)
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

// Deleting last node
void deleteLastNode(Node *&tail)
{
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}

// Deleting any Node
void deleteAnyNode(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    if (head == NULL)
        return;
    else if (pos == 0)
    {
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    while (pos-- && temp != NULL)
        temp = temp->next;

    if (temp == NULL)
        return;
    else if (temp->next == NULL)
    {
        temp->prev->next = temp->next;
        tail = temp->prev;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int arr1[10] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
        insertNodeAtEnd(head, tail, arr1[i]);

    int arr2[10] = {6, 7, 8};
    for (int i = 0; i < 3; i++)
        insertNodeAtStart(head, tail, arr2[i]);

    int arr3Data[10] = {10, 20, 30};
    int arr3Position[10] = {1, 1, 8};
    for (int i = 0; i < 1; i++)
        insertNodeAtAnyPosition(head, tail, arr3Data[i], arr3Position[i]);

    printNodeFromHead(head);
    printNodeFromTail(tail);

    deleteFirstNode(head);
    deleteLastNode(tail);
    deleteAnyNode(head, tail, -1);

    printNodeFromHead(head);
    printNodeFromTail(tail);
}