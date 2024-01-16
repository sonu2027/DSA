#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int *p = new int[1000000000000000000];
        cout << "Memory alloctaion is successfully" << endl;
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Ecxeption Occured: " << e.what() << endl;
    }
}