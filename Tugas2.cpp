#include <iostream> // Header file untuk input-output standar.
using namespace std;

int main() { // Fungsi utama program.
    // Deklarasi variabel
    system ("CLS"); // Membersihkan sampah dari layar
    string nama; // Variabel untuk menyimpan nama karyawan.
    int golongan, jumlah_anak; // Variabel untuk menyimpan golongan dan jumlah anak.
    const int gaji_golongan1 = 5000000; // Gaji pokok golongan 1.
    const int gaji_golongan2 = 3000000; // Gaji pokok golongan 2.
    const int gaji_golongan3 = 2500000; // Gaji pokok golongan 3.
    const float pajak = 0.05; // Persentase pajak.
    const int tambahan_anak_1_2 = 500000; // Tambahan gaji untuk 1 atau 2 anak.
    const int tambahan_anak_lebih_dari_2 = 750000; // Tambahan gaji untuk lebih dari 2 anak.

    // Menampilkan pesan dan menerima input dari pengguna
    cout << "Masukkan Nama Anda: "; 
    getline(cin, nama); // Menggunakan getline() untuk menerima input dengan spasi.

    cout << "Masukkan Golongan (1, 2, atau 3): ";
    cin >> golongan;

    cout << "Jumlah anak: ";
    cin >> jumlah_anak;

    // Menghitung gaji total
    int gaji_pokok; // Variabel untuk menyimpan gaji pokok.
    switch (golongan) { // Memilih gaji pokok berdasarkan golongan.
        case 1:
            gaji_pokok = gaji_golongan1;
            break;
        case 2:
            gaji_pokok = gaji_golongan2;
            break;
        case 3:
            gaji_pokok = gaji_golongan3;
            break;
        default:
            cout << "Golongan tidak valid." << endl; // Pesan jika golongan tidak valid.
            return 1;
    }

    // Menghitung gaji total berdasarkan jumlah anak
    int gaji_total = gaji_pokok - (gaji_pokok * pajak); // Mengurangi pajak dari gaji pokok.
    if (jumlah_anak > 0) { // Jika memiliki anak.
        if (jumlah_anak <= 2) {
            gaji_total += tambahan_anak_1_2 * jumlah_anak; // Menambahkan tambahan untuk 1 atau 2 anak.
        } else {
            gaji_total += tambahan_anak_lebih_dari_2 * jumlah_anak; // Menambahkan tambahan untuk lebih dari 2 anak.
        }
    }

    // Menampilkan gaji total
    cout << "Gaji total untuk " << nama << ": Rp. " << gaji_total << endl;

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dijalankan dengan sukses.
}