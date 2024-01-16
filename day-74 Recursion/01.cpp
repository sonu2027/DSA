#include <iostream>
using namespace std;
int main()
{
    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the " << size << " number of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    return 0;
}

/*
6 2 8 1 9 4

2 6 8     1 9 4
2 6    8     1 4      9
2  6         1   9    
*/