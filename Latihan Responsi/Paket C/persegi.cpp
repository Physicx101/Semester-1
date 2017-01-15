#include <iostream>

using namespace std;

int main() {
	int h, w;
	cout << "Tinggi: ";
	cin >> h; cout << endl;
	cout << "Lebar: ";
	cin >> w; cout << endl;

	for (int i = 1; i <= w; i++) {
		cout << "*" << " ";
	}
	cout << endl;
	for (int i = 1; i <= h - 2; i++){
		for (int j = 1; j <= 2 * w; j++) {
			if (j == 1 || j == 2 * w - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 1; i <= w; i++) {
		cout << "*" << " ";
	}
	cout << endl;
}