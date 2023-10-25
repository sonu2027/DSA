#include <iostream>
using namespace std;
bool isPerfectSquare(int num)
{
    float nums = num;
    if (nums == 1)
        return true;
    int start = 0, end = nums;
    float mid;
    bool ans = false;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == nums / mid)
        {
            cout << "mid & num: " << mid << " " << nums << endl;
            ans = true;
            break;
        }
        else if (mid > nums / mid)
        {
            end = mid - 1;
            cout << "end: " << end << endl;
        }
        else
        {
            start = mid + 1;
            cout << "start: " << start << endl;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << "Ans: " << isPerfectSquare(num);
    return 0;
}