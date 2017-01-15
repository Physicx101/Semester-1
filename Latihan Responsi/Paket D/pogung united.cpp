#include <iostream>

using namespace std;

struct data{
    float minggu;
    float shot;
    float gol;
};

int main (){
    data pogung[6];
    float mshot, mgol, sshot = 0, sgol = 0;
    int a, b;
    for (int i = 0; i < 6; i++){
        cout << "Minggu ke: ";
        cin >> pogung[i].minggu; cout << endl;
        cout << "Tendangan: ";
        cin >> pogung[i].shot; cout << endl;
        cout << "Gol: ";
        cin >> pogung[i].gol; cout << endl;
    }
    float mingol = pogung[0].gol;
    float minshot = pogung[0].shot;
    
    //menghitung rata-rata shot
    for (int i = 0; i < 6; i++){
        sshot += pogung[i].shot;
    }
    mshot = sshot / 6;
    //menghitung rata-rata gol
    for (int i = 0; i < 6; i++){
        sgol += pogung[i].gol;
    }
    mgol = sgol / 6;
    
    //gol paling sedikit
    for (int i = 0; i < 6; i++){
        if (pogung[i].gol < mingol){
            mingol = pogung[i].gol;
        }
        a = i;
        
    }
    //shot paling sedikit
    for (int j = 0; j < 6; j++){
        if (pogung[j].shot < minshot){
            minshot = pogung[j].shot;
        }
        b = j;
    }
    cout << "Rata-rata tendangan: " << mshot << endl;
    cout << "Rata-rata gol: " << mgol << endl;
    cout << "Gol paling sedikit: " << " Minggu " << a + 1 << endl;
    cout << "Tendangan paling sedkit: " << " Minggu " << b + 1 << endl;
    
}