#include <iostream>

using namespace std;
int main (){
    int A[25], B[25], C[25];
    int numA = 0, numB = 0, n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "[Array A] - Masukkan data ke - " << i + 1 << " ";
        cin >> A[i];
    }
    for (int j = 0; j < n; j++){
        cout << "[Array B] - Masukkan data ke - " << j + 1 << " ";
        cin >> B[j];
    }
    for (int k = 0; k < n; k++){
        if (A[k] > B[k]){
            C [k] = A[k];
            numA += 1;
        }
        else {
            C[k] = B[k];
            numB += 1;}
        }
        if (numA > numB){
            cout << "Array yang terbesar terbanyak adalah A" << endl;
        }
        else {
            cout << "Array yang terbesar terbanyak adalah B" << endl;
        }
    }
    
