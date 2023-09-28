/*
If n=5
        *
      * * * 
    * * * * * 
  * * * * * * *
* * * * * * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value fo row: ";
    cin>>n;
    int temp=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp-1; j++)
        {
            cout<<"   ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<" * ";
        }
        temp--;
        cout<<endl;
    }
    
    return 0;
}