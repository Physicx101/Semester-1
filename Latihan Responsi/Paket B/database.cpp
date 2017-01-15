#include <iostream>
#include <string>

using namespace std;

int main() {
	bool found = false;
	int nomor[] = { 14045, 14046, 14047, 14048, 14049 };
	string nama[] = { "Mia", "Maria", "Julia", "Kageo", "Ahok" };
	int n;
	cout << "Masukkan nomor yang akan dicari: ";
	cin >> n;
	for (int i = 0; i < 5; i++) {
		if (n == nomor[i]) {
			cout << nama[i] << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "Data tidak ditemukan" << endl;
	}
}