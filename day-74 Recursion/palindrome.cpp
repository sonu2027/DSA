// check palindrome using recursion

#include <iostream>
#include <string>
using namespace std;

int count_vowel(string str, int start, int size)
{
    if (start == size)
        return 0;

    if (
        str[start] == 'a' | str[start] == 'e' || str[start] == 'i' || str[start] == 'o' || str[start] == 'u' ||
        str[start] == 'A' | str[start] == 'E' || str[start] == 'I' || str[start] == 'O' || str[start] == 'U')
        return 1 + count_vowel(str, start + 1, size);
    else
        return count_vowel(str, start + 1, size);
}
int main()
{
    string str = "mynameisnumondal";
    cout << count_vowel(str, 0, str.size());
}