/*
         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = n; j >0; j--)
        {
            if(j<=i)
            cout<<j<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}