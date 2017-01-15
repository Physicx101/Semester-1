#include <iostream>
using namespace std;
int main()
{
    int i,space,rows,k;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            cout << "  ";
        }
        for (k=1; k<=2*i-1;k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}