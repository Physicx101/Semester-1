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
		cout << "Input data number " << i + 1 << ": ";
		cin >> arr[i];
	}
	    //insertion
    for (int i = 1; i < n; i++){
        j = i;
        while (j > 0 && arr[j-1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
	//Print out sorted numbers
	cout << "The numbers in ascending order: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

