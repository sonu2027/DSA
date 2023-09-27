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
    int n;
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>=i)
            cout<<n-i<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}