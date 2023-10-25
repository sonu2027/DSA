#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // Vector declaration
    vector<int> v;
    vector<int> v1(5);

    // Vector Initialization
    vector<int> v2 = {8, 2, 10};
    vector<int> v3(5, 7);

    // Insertion in vector
    // 1. push_back(): Insert element at end, time complexity: O(1)
    vector<int> v4;
    v4.push_back(2);
    v4.push_back(4);
    v4.push_back(0);
    // 2 insert(): Insert element at any position, time complexity: O(n)
    v4.insert(v4.begin(), 12);
    cout << "Inserting element 12 at begining: ";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    v4.insert(v4.end() - 1, 21);
    cout << "Inserting element 21 at end-1: ";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl
         << endl;

    // Remove element
    // 1. pop_back(): Remove element from end, time complexity: O(1)
    cout << "v4 after pop_back(): ";
    v4.pop_back();
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    // 2. erase(): Remove element from any position, time complexity: O(n)
    v4.erase(v4.begin());
    cout << "after erasing first element, v.erase(): ";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    // 3. clear(): It will clear the vector, time complexity: O(n)
    v4.clear();
    cout << "after v.clear() v4: ";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    cout << "Now, vector in clear so we push 2, 4 and 0 for further opeartion: " << endl
         << endl;
    v4.push_back(2);
    v4.push_back(4);
    v4.push_back(0);

    // front(), time complexity: O(1), back(), time complexity: O(1), at(), time complexity: O(n), empty(), time complexity: O(1)
    cout << "front(), back(), at(), empty(): " << endl;
    ;
    cout << "Front element: " << v4.front() << ", back element: " << v4.back() << ", element at index 2: " << v4.at(2) << ", empty or not: " << v4.empty() << endl
         << endl;

    // sorting in vector, time complexity: O(nlogn)
    cout << "sorting: " << endl;
    cout << "Sorting in incraesing order: ";
    sort(v4.begin(), v4.end()); // In increasing order
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    cout << "Sorting in decraesing order: ";
    sort(v4.rbegin(), v4.rend()); // In decreasing order
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    cout << "Sorting in decraesing order: ";
    sort(v4.begin(), v4.end(), greater<int>()); // In decreasing order
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl
         << endl;

    // Printing vector
    cout << "Printing vector with different way" << endl;
    // 1. like array
    cout << "1. like array: ";
    for (int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";
    cout << endl;
    // 2. With iterator
    cout << "2. With iterator: ";
    for (auto it = v4.begin(); it != v4.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << "3. By vector method: ";
    for (auto i : v4)
        cout << i << " ";
    cout << endl
         << endl;

    // vector can be copy to another vector
    cout << "copying vector: " << endl;
    vector<int> v5(5, 8);
    cout << "v5 before copied v4: ";
    for (auto i : v5)
        cout << i << " ";
    cout << endl;
    v5 = v4;
    cout << "v5 after copied v4: ";
    for (auto i : v5)
        cout << i << " ";
    cout << endl
         << endl;

    // size and capacity of vector
    cout << "size and capacity of vector" << endl;
    vector<int> v6;
    cout << "size of vector v6: " << v6.size() << endl;
    cout << "capacity of vector v6: " << v6.capacity() << endl;
    v6.push_back(2);
    cout << "size of vector v6 after push_back(2): " << v6.size() << endl;
    cout << "capacity of vector v6 after push_back(2): " << v6.capacity() << endl;
    v6.push_back(0);
    cout << "size of vector v6 after push_back(0): " << v6.size() << endl;
    cout << "capacity of vector v6 after push_back(0): " << v6.capacity() << endl;
    v6.push_back(10);
    cout << "size of vector v6 after push_back(10): " << v6.size() << endl;
    cout << "capacity of vector v6 after push_back(10): " << v6.capacity() << endl;
    v6.insert(v6.begin() + 1, 6);
    cout << "size of vector v6 after insert(v.begin() + 1, 6): " << v6.size() << endl;
    cout << "capacity of vector v6 after insert(v.begin() + 1, 6): " << v6.capacity() << endl;
    v6.insert(v6.end(), 60);
    cout << "size of vector v6 after insert(v6.end() , 60), 6): " << v6.size() << endl;
    cout << "capacity of vector v6 after insert(v6.end() , 60), 6): " << v6.capacity() << endl;

    return 0;
}