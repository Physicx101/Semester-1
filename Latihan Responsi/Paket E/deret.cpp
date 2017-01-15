#include <iostream>

using namespace std;

int der(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return der(n - 1) + n;
	}
}

int main() {
	int n;
	cout << "Masukkan angka: ";
	cin >> n;
	cout << der(n) << endl;
}