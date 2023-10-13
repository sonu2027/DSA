#include <iostream>
using namespace std;

// Sorting array
void sort(int arr[], int length)
{
    int index;
    for (int i = 0; i < length - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
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
    int arr[100],length;
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