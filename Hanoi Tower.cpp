#include <iostream>

using namespace std;

void menara(int n, char asal, char bantu, char tujuan){
    if (n == 1){
        cout << "Piringan 1 dari " << asal << " ke " << tujuan << endl;
    }
        else {
            menara (n - 1, asal, tujuan, bantu);
            cout << "Piringan " << n << " dari " << asal << " ke " << tujuan << endl;
            menara (n - 1, bantu, asal, tujuan);
        }
}

int main (){
    int piringan;
    cout << "Masukkan jumlah piringan: ";
    cin >> piringan;
    cout << endl;
    menara (piringan, 'A', 'B', 'C');
}

