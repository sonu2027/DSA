/*
HOMEWORK QUESTION:
        A
      B B
    C C C
  D D D D
E E E E E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of row"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if(j<=i){
                cout<<ch<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        ch++;
        cout<<endl;
        
    }
    
    return 0;
}