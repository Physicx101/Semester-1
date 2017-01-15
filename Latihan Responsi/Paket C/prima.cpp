#include <iostream>

using namespace std;

int main() {
	int a, count = 0;
	cout << "Masukkan bilangan: ";
	cin >> a;
	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0) {
			count++;
		}
	}
	if (count > 2 || a == 1) {
		cout << "Bukan prima" << endl;
	}
	else {
		cout << "Bilangan prima" << endl;
	}
}