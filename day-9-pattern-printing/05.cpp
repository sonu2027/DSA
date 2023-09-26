/*
a
b b
c c c
d d d d
e e e e e
*/

 #include<iostream>
 using namespace std;
 int main(){
    char ch='a';
    int row;
    cout<<"Enter the number of row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    
    return 0;
 }