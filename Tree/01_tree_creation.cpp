#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void createTree(queue<Node *> q, queue<Node *> &Q)
{
    int arr[10] = {19, 2, 3, -1, 5, 6, 7, -1, 9, 10};
    for (int i = 0; i < 10; i += 2)
    {
        Node *temp = q.front();
        q.pop();

        if (arr[i] != -1)
        {
            temp->left = new Node(arr[i]);
            q.push(temp->left);
            Q.push(temp->left);
        }
        if (i + 1 < 10 && arr[i + 1] != -1)
        {
            temp->right = new Node(arr[i + 1]);
            q.push(temp->right);
            Q.push(temp->right);
        }
    }
    cout << "Tree created successfully!" << endl;
}

void printTree(queue<Node *> Q)
{
    cout << Q.front()->data << " ";
    while (!Q.empty())
    {
        if (Q.front()->left != NULL)
        {
            cout << Q.front()->left->data << " ";
        }
        if (Q.front()->right != NULL)
        {
            cout << Q.front()->right->data << " ";
        }
        Q.pop();
    }
    cout << endl
         << "Tree printed successfully!" << endl;
}

int main()
{
    // Create root Node
    Node *root = new Node(9);

    queue<Node *> q;
    queue<Node *> Q;
    q.push(root);
    Q.push(root);

    createTree(q, Q);

    printTree(Q);
}