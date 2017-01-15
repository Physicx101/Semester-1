#include <iostream>

using namespace std;
int main (){
    int temp;
    int N [8] = {3, 4, 21, 20, 3, 6, 7, 12};
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8 - i - 1; j++){
        if (N[j] < N[j+1]){
            temp = N[j+1];
            N [j+1] = N [j];
            N [j] = temp;
        }
    }
}
    cout << "Nilai max ke-1: " << N[0] << endl;
    cout << "Nilai max ke-2: " << N[1] << endl;
}