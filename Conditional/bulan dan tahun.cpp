#include <iostream>

using namespace std;
int main (){
    int numberOfDays, month, year;
    cout<<"Masukkan bulan: ";
    cin>>month;
    cout<<"Masukkan tahun: ";
    cin>>year;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        numberOfDays = 30;
    if (month == 2)
    { bool kabisat = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (kabisat)
            numberOfDays = 29;
        else
            numberOfDays = 28;
    }  
    else  
        numberOfDays = 31;
    cout<<numberOfDays<<" ";
}