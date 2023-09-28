/*
If n=5
        1
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value fo row: ";
    cin>>n;
    int temp=n;
    int dec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp-1; j++)
        {
            cout<<"   ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j>(2*i+1)/2){
                cout<<" "<<dec<<" ";
                dec--;
            }
            else{
                cout<<" "<<j+1<<" ";
                dec=j;
            }
        }
        temp--;
        cout<<endl;
    }
    
    return 0;
}