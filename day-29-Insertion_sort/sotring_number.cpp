#include <iostream>
using namespace std;

// Sorting array

/*
Time complexity: 
* Best case-> O(n)
* Worst case-> O(n*n)

Space complexity:
* Auxillary space: O(1)
* Total space: O(n)
*/

void sort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
}

// Printing array
void print(int arr[], int length)
{
    cout << "Array after sorting is: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], length;
    cout << "Enter the length of array: ";
    cin >> length;
    cout << "Enter the " << length << " elements of array by giving space between them: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    sort(arr, length);
    print(arr, length);

    return 0;
}