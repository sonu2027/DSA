/*
For n=5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int row=n; row >=1; row--)
    {
        // Print *
        for (int col = 1; col <=row ; col++)
        cout<<"*";

        // Print space
        for(col=1; col<=2*n - 2* row; col++)
        cout<<" ";

        // Print *
        for (int col = 1; col <=row ; col++)
        cout<<"*";

        cout<<endl;
        
    }

    for (int row=1; row <=n; row++)
    {
        // Print *
        for (int col = 1; col <=row ; col++)
        cout<<"*";

        // Print space
        for(col=1; col<=2*n - 2* row; col++)
        cout<<" ";

        // Print *
        for (int col = 1; col <=row ; col++)
        cout<<"*";

        cout<<endl;
        
    }

    return 0;
}