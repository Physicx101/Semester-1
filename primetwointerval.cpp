#include <iostream>
#include <math.h>

using namespace std;
int main (){
    int a, b, count;
    cout << "Pertama: "; cin >> a;
    cout << "Kedua: "; cin >> b;
    for (int i = a; i <= b; i++){
        count = 0;
        for (int j = 2; j <= i/2; j++){
            if(i % j ==0){
                count++;
                break;
            }
        }
        if(count == 0 && i != 1){
            cout << i << endl;
        }
    }
}