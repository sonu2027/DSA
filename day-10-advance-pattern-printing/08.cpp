/* 
HOMEWORK QUESTION:
if n=5
         5
       5 4
     5 4 3
   5 4 3 2
 5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of number"<<endl;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j >=0; j--)
        {
            if(j<=i){
                cout<<num-(i-j)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}