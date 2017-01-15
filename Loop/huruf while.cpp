#include <iostream>

using namespace std;
int main (){
    char huruf = 65;
    int jml;
    cout<<"Masukkan jumlah huruf yang ingin ditampilkan: ";
    cin>>jml;
    while (jml > 0){
        cout<<huruf++<<" ";jml--;
    }
}
