#include <iostream>

using namespace std;
int main (){
	int nilai;
	cout << "Masukkan nilai siswa: ";
	cin >> nilai;
	
	if (nilai >= 85 && nilai <= 100){
		cout<<"A";
	}
	else if (nilai >= 70 && nilai <= 84){
		cout<<"B";
	}
	else if (nilai >= 40 && nilai <= 69){
		cout<<"C";
	}
	else if (nilai >= 20 && nilai <=39){
		cout<<"D";
	}
	else cout<<"E";
}
