#include <iostream>

using namespace std;
int main()
{
	int arr[30], temp, n;
	cout << "Input the amount of numbers: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Input data number " << i+1 << ": ";
		cin >> arr[i];
	}
	for (int j = 0; j < n - 1; j++) {
		for (int k = 0; k < n - j - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
				}
			}
		}
	cout << "The numbers in ascending order: ";
	for (int l = 0; l < n; l++) {
		cout << arr[l] << " ";
	}
}

