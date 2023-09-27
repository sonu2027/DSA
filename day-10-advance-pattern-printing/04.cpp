/*
         A
       A B
     A B C
   A B C D
 A B C D E
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    for (int i = n; i >0; i--)
    {
        ch='A';
        for (int j = 1; j <=n; j++)
        {
            if(j>=i){
                cout<<ch<<" ";
                ch++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}