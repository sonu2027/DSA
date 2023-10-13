#include <iostream>
using namespace std;

// Sorting array
void sort(int arr[], int length)
{
    bool swapped=false;
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
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