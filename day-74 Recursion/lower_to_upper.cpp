// Lower to upper using recursion

#include <iostream>
#include <string>
using namespace std;

void lowerToUpper(string &str, int end)
{
    if (end == -1)
        return;

    str[end] = str[end] - 32;
    lowerToUpper(str, end - 1);
}

int main()
{
    string str = "mynameissonumondal";
    lowerToUpper(str, str.size() - 1);
    cout << "string after conversion: " << str;
}