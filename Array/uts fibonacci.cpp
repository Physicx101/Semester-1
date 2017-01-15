#include <iostream>
using namespace std;

int main ()
{
    int n,first = 1, second = 1, next, sum = 2;
    cout << "Masukkan sum dari deret: ";
    cin >> n;
    cout << first << " + " << second << " + ";
    while (sum < n-next){
            next = first + second;
            cout << next << " + ";
            first = second;
            second = next;
            sum = sum + second;
    }
    cout << endl << "Jumlahnya adalah : " << sum << endl;
}