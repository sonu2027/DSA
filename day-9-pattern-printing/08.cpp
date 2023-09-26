/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of row" << endl;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}