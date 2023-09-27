/*
HOMEWORK QUESTION:
if num=5
         E
       E D 
     E D C
   E D C B
 E D C B A
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    char ch;
    cout<<"Enter the value of n";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        ch =65+num-1;
        for (int j = num; j >=0; j--)
        {
            if(j<=i){
                cout<<ch<<" ";
                ch--;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}