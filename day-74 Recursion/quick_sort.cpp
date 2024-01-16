// #include <iostream>
// using namespace std;

// void print(int *arr, int start, int end)
// {
//     cout << "The elements of array are: ";
//     for (int i = start; i < end; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// void arrange(int *arr, int pivot, int start, int count, int end)
// {
//     if (end - start <= 1)
//         return;
//     int n1 = 0, n2 = count - start;
//     int *ptr = new int[end - start];
//     for (int i = start; i < end; i++)
//         if (arr[i] <= pivot)
//             ptr[n1++] = arr[i];
//         else
//             ptr[n2++] = arr[i];

//     int m = 0;
//     for (int i = start; i < end; i++)
//         arr[i] = ptr[m++];

//     delete[] ptr;
// }

// void divide(int *arr, int start, int end)
// {
//     if (end - start <= 1)
//         return;
//     int count = 0;
//     int pivot = arr[end - 1];
//     for (int i = start; i < end - 1; i++)
//         if (arr[i] <= pivot)
//             count++;

//     swap(arr[start + count], arr[end - 1]);

//     arrange(arr, pivot, start, start + count + 1, end);

//     cout << "start: " << start << " count: " << count << " end: " << end << endl;

//     print(arr, 0, 6);
//     divide(arr, start, start + count);
//     divide(arr, start + count + 1, end);
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     int *arr = new int[size];
//     cout << "Enter the elements of array: ";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];
//     divide(arr, 0, size);
//     print(arr, 0, size);
//     delete[] arr;
// }

#include <iostream>
using namespace std;

void print(int *arr, int start, int end)
{
    cout << "The elements of the array are: ";
    for (int i = start; i < end; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void arrange(int *arr, int pivot, int start, int count, int end)
{
    if (end - start <= 1)
        return;

    int n1 = 0, n2 = count - start;
    int *ptr = new int[end - start];

    for (int i = start; i < end; i++)
        if (arr[i] <= pivot)
            ptr[n1++] = arr[i];
        else
            ptr[n2++] = arr[i];

    int m = 0;
    for (int i = start; i < end; i++)
        arr[i] = ptr[m++];

    delete[] ptr;
}

void divide(int *arr, int start, int end)
{
    if (end - start <= 1)
        return;

    int count = 0;
    int pivot = arr[end - 1];

    for (int i = start; i < end - 1; i++)
        if (arr[i] <= pivot)
            count++;

    swap(arr[start + count], arr[end - 1]);

    arrange(arr, pivot, start, start + count + 1, end);

    divide(arr, start, start + count);
    divide(arr, start + count + 1, end);
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    divide(arr, 0, size);
    print(arr, 0, size);

    // Don't forget to free the allocated memory
    delete[] arr;

    return 0;
}
