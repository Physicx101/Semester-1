#include <iostream>

using namespace std;
int main (){
    float num [30], avg, sum = 0, bil;
    cout << "Masukkan jumlah bilangan yang akan dihitung rata ratanya: ";
    cin >> bil;
    for (int i = 0; i <= bil-1; i++){
        cout << "Masukkan angka ke- " << i+1 << ": "; cin >> num [i];}
        for (int j = 0; j <= bil-1; j++){
            sum = sum + num [j];
        }
        avg = sum / bil;
        cout << "Rata-ratanya adalah: " << avg;
}