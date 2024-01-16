// binary search using recursion

#include <iostream>
using namespace std;

bool binary_search(int arr[], int target, int start, int end)
{

    int mid = start + (end - start) / 2;

    if (start > end)
        return false;

    if (arr[mid] == target)
        return true;
    else if (arr[mid] > target)
        return binary_search(arr, target, start, mid - 1);
    else
        return binary_search(arr, target, mid + 1, end);
}

void testcase(int arr[])
{
    for (int i = -2; i <= 22; i++)
        cout << binary_search(arr, i, 0, 10) << " ";
}

int main()
{
    int arr[100] = {2, 4, 5, 7, 9, 10, 13, 16, 17, 18};
    testcase(arr);
}