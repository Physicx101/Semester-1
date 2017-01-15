#include <iostream>

using namespace std;
int main (){
    char huruf = 65;
    int jml;
    cout<<"Masukkan jumlah huruf yang ingin ditampilkan: ";
    cin>>jml;
    for (int i = 1; i <= jml; i++){
        cout<<huruf++<<" ";
    }
}
