#include <iostream>

using namespace std;

string Encrypt(string kata, int shift)
{
    string Crypted = kata;
    
    for(int i = 0; i < kata.length(); i++)
        Crypted[i] += shift;
    
    return Crypted;
}

string Decrypt(string kata, int shift)
{
    string Decrypted = Encrypt(kata, shift);
    
    for(int i = 0; i < Encrypt(kata, shift).length(); i++)
        Decrypted[i] -= shift;
    
    return Decrypted;
}

int main()
{
    string kata;
    int shift;
    
    cout<<"Masukkan sumber: ";
    cin >> kata;
    
    cout<<"Masukkan kunci: ";
    cin>> shift;
    
    cout<<"Encrypted: "<< Encrypt(kata, shift) << endl;
    cout << "Decrypted: " << Decrypt (kata, shift) << endl;
}

