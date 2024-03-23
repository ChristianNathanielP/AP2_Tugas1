#include <iostream>
using namespace std;

int main() {
    system("cls");
    // buat variable
    char golongan;
    int gaji_pokok, pajak, jumlah_anak, tambahan_anak, total_gaji;

    cout << "Masukkan Nama Anda : ";  // meminta memasukkan nama
    string nama;
    getline(cin, nama); // agar dapat membaca spasi dalam nama

    cout << "Masukkan Golongan (1,2,3) : "; cin >> golongan; // meminta masukkan golongan
    cout << "Jumlah anak : "; cin >> jumlah_anak; // meminta masukkan julah anak

    // untuk menentukan gaji yg dipilih
    switch (golongan) {
        case '1':
            gaji_pokok = 5000000;
            break;
        case '2':
            gaji_pokok = 3000000;
            break;
        case '3':
            gaji_pokok = 2500000;
            break;
        default:
            // jika diluar pilihan maka seperti ini
            cout << "Golongan yang dimasukkan tidak valid." << endl;
            return 1; // memberi tahu ada kesalahan
    }

    // menghitung tambahan uang anak
    if (jumlah_anak >= 1 && jumlah_anak <= 2)
        tambahan_anak = 500000 * jumlah_anak;
    else if (jumlah_anak > 2)
        tambahan_anak = 750000 * jumlah_anak;
    else
        tambahan_anak = 0;

    pajak = 0.05 * gaji_pokok; // rumus menghitung pajak
    total_gaji = gaji_pokok - pajak + tambahan_anak; // rumus total gaji
    cout << "Gaji total : Rp. " << total_gaji << ",-" << endl; // Hasil gaji total nya


}
