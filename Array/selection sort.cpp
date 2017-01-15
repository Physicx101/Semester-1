#include <iostream>

using namespace std;
int main()
{
	//Assigning numbers to each index of array
	int arr[30], temp, n;
	cout << "Input the amount of numbers: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Input data number " << i+1 << ": ";
		cin >> arr[i];
	}
	//Swapping
	for (int j = 0; j < n-1; j++) {
		for (int k = j+1; k < n; k++) {
			if (arr[j] > arr[k]) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
				}
			}
		}
	//Print out sorted numbers
	cout << "The numbers in ascending order: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

