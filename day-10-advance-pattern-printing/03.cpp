/*
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    for (int i = n; i >0; i--)
    {
        for (int j = 1; j <=n; j++)
        {
            if(j>=i)
            cout<<j-i+1<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}