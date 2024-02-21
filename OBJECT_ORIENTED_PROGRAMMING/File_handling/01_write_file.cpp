#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;

    // File open
    file.open("zoom.txt");

    // Write file
    file<<"Hello, Sonu Mondal";

    // Close the file
    file.close();
}