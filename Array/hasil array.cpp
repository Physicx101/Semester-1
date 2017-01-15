#include <iostream>

using namespace std;
int main (){
    int num, sum = 0, arr [30];
    cout << "Masukkan jumlah angka yang akan dijumlahkan: ";
    cin >> num;
    for (int i = 0; i < num; i++){
        cout << "Masukkan angka ke - " << i+1 << ": ";
        cin >> arr [i];
        cout << "\n";
    }
    for (int j = 0; j < num; j++){
        sum = sum + arr [j];
    }
    cout << "Jumlahnya adalah: " << sum;
}