#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan angka yang dimasukkan pengguna
    int angka;

    // Meminta pengguna untuk memasukkan angka
    cout << "Masukkan angka anda: ";
    cin >> angka;

    // Memeriksa apakah angka tersebut ganjil atau genap
    if (angka % 2 == 0) {
        // Jika angka genap, tampilkan pesan bahwa angka tersebut genap
        cout << angka << " merupakan bilangan genap" << endl;
    } else {
        // Jika angka ganjil, tampilkan pesan bahwa angka tersebut ganjil
        cout << angka << " merupakan bilangan ganjil" << endl;
    }
    
    return 0;
}