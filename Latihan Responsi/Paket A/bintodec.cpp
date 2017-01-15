#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int arr[10], bin, x = 0, dec = 0;
    cout << "Masukkan angka biner: ";
    cin >> bin;
    while (bin !=0){
        arr[x] = bin % 10;
        bin /= 10;
        x ++;
    }
    for (int i = 0; i < 10; i++){
        if (arr[i] == 1){
            dec = dec + pow(2, i);
        }
    }
    cout << "Desimalnya adalah: " << dec << endl;
}