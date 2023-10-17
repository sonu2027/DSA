#include <iostream>
#define EXIT_SUCCESS
using namespace std;

// Binary search

/*
Time complexity:
* Best case-> O(1)
* Worst case-> O(logn)

Space complexity:
* Auxillary space: O(1)
* Total space: O(n)
*/

void search(int arr[], int length, int element)
{
    int start = 0;
    int end = length - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == element)
        {
            cout << "Element found a index " << mid << endl;
            return EXIT_SUCCESS;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
            mid = start + (end - start) / 2;
        }
        else
        {
            end = mid - 1;
            mid = start + (end - start) / 2;
        }
    }
    cout << "Element not found ";
}

int main()
{
    int arr[100], length, element;
    cout << "Enter the length of array: ";
    cin >> length;
    cout << "Enter the " << length << " elements of array in sorted order by giving space between them: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> element;

    search(arr, length, element);
    return 0;
}