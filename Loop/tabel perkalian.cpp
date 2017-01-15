#include <iostream>

using namespace std;
int main()
{
int j,i,rows,col;
cout << "Masukkan jumlah baris: "; cin >> rows;
cout << "Masukkan jumlah kolom: "; cin >> col;
cout << "*\t";
    for(i =1 ; i <= rows; i++) cout << i << "\t"; cout << "\n";
    for(j = 1; j <= col ; j++){
	cout << j << "\t";
	for(i = 1; i <= rows; i++){
		cout << i*j << "\t";
		}
		cout<<"\n";
    }
}
