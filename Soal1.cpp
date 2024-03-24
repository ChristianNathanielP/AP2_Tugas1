#include <iostream>
using namespace std;

int main(){
    int angka;

    // Meminta pengguna untuk memasukkan sebuah bilangan bulat
    cout << "Masukkan angka anda: ";
    cin >> angka;

    // Menentukan apakah bilangan yang dimasukkan adalah bilangan genap atau ganjil
    if (angka % 2 == 0){
        cout << angka << " merupakan bilangan genap." << endl;
    }
    else
    {
        cout << angka << " merupakan bilangan ganjil." << endl;
    }

    return 0;
}