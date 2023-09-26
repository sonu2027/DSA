/*
1 
2 2 
3 3 3 
4 4 4 4
5 5 5 5 5
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}