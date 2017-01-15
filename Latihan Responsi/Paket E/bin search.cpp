 #include <iostream>

using namespace std;

int main() {
	bool found = false;
	int data[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n, mid, i = 0, j = sizeof(data) / sizeof(data[0]);
	cout << "Masukkan angka yang akan dicari: ";
	cin >> n;
	while (!found && i <= j) {
		mid = (i + j) / 2;
		if (data[mid] < n) {
			i = mid + 1;
		}
		else if (data[mid] == n) {
			found = true;
		}
		else {
			j = mid - 1;
		}
	}
	if (!found) {
		cout << "Data tidak ditemukan" << endl;
	}
	else {
		cout << "Data ditemukan" << endl;
	}
}
