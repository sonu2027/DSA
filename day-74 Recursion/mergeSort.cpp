#include <iostream>
using namespace std;

void print(int *arr, int start, int end)
{
    cout << "The elements of array are: ";
    for (int i = start; i < end; i++)
        cout << arr[i] << " ";
}

void conquer(int *ptr, int start, int mid, int end)
{
    int n1 = mid;
    int n2 = end;

    int *arr = new int[end - start];

    int i = start, j = mid;
    int k = 0;
    
    while (i < mid && j < end)
        if (ptr[i] > ptr[j])
            arr[k++] = ptr[j++];
        else
            arr[k++] = ptr[i++];

    while (i < mid)
        arr[k++] = ptr[i++];

    while (j < end)
        arr[k++] = ptr[j++];

    int m = start;
    for (int i = 0; i < end - start; i++)
        ptr[m++] = arr[i];

    delete[] arr;
}

void divide(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (end - start <= 1)
        return;

    divide(arr, start, mid);
    divide(arr, mid, end);
    conquer(arr, start, mid, end);
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    divide(arr, 0, size);
    print(arr, 0, size);
}