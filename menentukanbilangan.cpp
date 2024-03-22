#include <iostream>
using namespace std;

int main() {
    int angka;
    // menginput bilangan bulat
    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> angka;

    // memeriksa apakah bilangan genap atau ganjil
    if (angka % 2 == 0) {
        cout << "Bilangan " << angka << " adalah genap." << endl;  
    } else {
        cout << "Bilangan " << angka << " adalah ganjil." << endl;
    }
}
