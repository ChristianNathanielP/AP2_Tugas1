#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main() {
    // deklarasi variabel
    string nama;
    int golongan, jumlah_anak;
    double gaji_pokok, pajak, tambahan_anak;

    cout << "Masukkan Nama Anda: ";
    cin >> nama;
    cout << "Masukkan Golongan (1, 2, 3): ";
    cin >> golongan;
    cout << "Jumlah anak: ";
    cin >> jumlah_anak;

    // Gaji pokok berdasarkan golongan
    switch (golongan) {
        case 1:
            gaji_pokok = 5000000;
            break;
        case 2:
            gaji_pokok = 3000000;
            break;
        case 3:
            gaji_pokok = 2500000;
            break;
        default:
            cout << "Golongan yang dimasukkan tidak valid." << endl;
    }

    // Hitung pajak 
    pajak = 0.05 * gaji_pokok;

    // Hitung tambahan uang per anak
    if (jumlah_anak <= 2) {
        tambahan_anak = 500000 * jumlah_anak;
    } else {
        tambahan_anak = 750000 * jumlah_anak;
    }

    // Hitung gaji total
    double gaji_total = gaji_pokok - pajak + tambahan_anak;

    // Output Hasil
    cout << "Gaji total untuk " << nama << ": Rp. " << fixed << setprecision(0) << gaji_total << ",-" << endl; 
    // fixed untuk menampilkan bilangan dengan notasi tetap
}
