#include <iostream>

using namespace std;
int main (){
    int jml, num = 1;
    cout<<"Masukkan jumlah angka yang ingin ditampilkan: ";
    cin>>jml;
    while (jml > 0){
        cout<<num++<<" ";jml--;
    }
}
