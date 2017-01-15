#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}


int main() {
	int a, b, lcm;
	cout << "Masukkan a: ";
	cin >> a;
	cout << "Masukkan b: ";
	cin >> b;
	lcm = a * b / gcd(a, b);
	cout << "KPK nya adalah: " << lcm << endl;
}