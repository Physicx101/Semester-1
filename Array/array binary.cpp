#include <iostream>

using namespace std;
int main (){
    int bin [31], num, i = 0;
    cout << "Masukkan bilangan yang akan diubah menjadi biner: ";
    cin >> num;
    while (num > 0){
        bin [i] = num % 2;
        i++; num = num / 2;
    }
    for (int j = i - 1; j >= 0; j--){
        cout << bin [j];
    }
}