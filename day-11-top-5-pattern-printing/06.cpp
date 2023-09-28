/*
If n=5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value fo row: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = n; col >0; col--)
        {
            if(col<=row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <n; col++)
        {
            if(col>=row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}