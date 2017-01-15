#include <iostream>

using namespace std;
int main (){
    int n, remainder, decimal = 0, base = 1;
    cout << "Masukkan bilangan biner: ";
    cin >> n;
    while (n !=0){
        remainder = n % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        n = n / 10;
    }
    cout << "Bilangan tersebut dalam decimal adalah: " << decimal;
}