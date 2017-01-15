#include <iostream>
using namespace std;
int main()
{
    int i,space,rows,k;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(i=rows ;i>=1;i--)
    {
        for(space=i;space<rows;space++)
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