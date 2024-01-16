// reverse string using recursion

#include <iostream>
#include <string>
using namespace std;

void rev_str(string &str, int start, int end)
{
    if (start >= end)
        return;
    swap(str[start], str[end]);
    rev_str(str, start + 1, end - 1);
}

int main()
{
    string str = "mynameissonumondal";
    cout<<"string before reverse: "<<str<<endl;
    rev_str(str, 0, str.size() - 1);
    cout<<"string after reverse: "<<str;
}