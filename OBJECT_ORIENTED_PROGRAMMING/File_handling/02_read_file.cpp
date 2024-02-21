// Read file with including space on it

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;

    // Open the file
    file.open("01_write_file.cpp");

    // Start Reading
    char ch = file.get();
    while (!file.eof())
    { // eof - End of file
        cout << ch;
        ch = file.get();
    }

    // Close the file
    file.close();
}