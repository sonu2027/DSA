/*
If n=5
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * * 
        *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value fo row: ";
    cin>>n;
    int temp=0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        temp++;
        for (int j = 0; j < temp; j++)
        {
            cout<<"  ";
        }
    }
    
    return 0;
}