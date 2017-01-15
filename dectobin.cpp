#include <iostream>

using namespace std;
int main (){
    int i = 1, rem, bin = 0, n;
    cout << "Masukkan bilangan decimal: ";
    cin >> n;
    while (n !=0){
        rem = n % 2;
        bin = bin + rem * i;
        i = i * 10;
        n = n/2;
    }
    cout << "Bilangan tersebut dalam biner adalah: " << bin;
}