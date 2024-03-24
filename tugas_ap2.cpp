#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel-variabel yang diperlukan
    int golongan, jumlah_anak, gaji, gaji_bersih, gaji_akhir; 
    string nama;  

    // Meminta input dari pengguna untuk nama
    cout << "Masukan Nama anda                 :   ";  
    getline(cin, nama); // Menggunakan getline() untuk membaca seluruh baris

    // Meminta input dari pengguna untuk golongan dan jumlah anak
    cout << "Golongan anda (1, 2, 3)   :   ";  cin >> golongan; 
    cout << "Jumlah anak anda          :   ";  cin >> jumlah_anak;

    // Menghitung gaji pokok berdasarkan golongan
    switch (golongan) {
        case 1 : gaji = 5000000; 
                 break; 
        case 2 : gaji = 3000000; 
                 break; 
        default : gaji = 2500000; // Jika golongan tidak valid, set gaji ke default 2500000
                 break; 
    }
    
    // Menghitung gaji bersih setelah potongan pajak (5% dari gaji pokok)
    gaji_bersih = gaji - (gaji * 0.05); 

    // Menghitung gaji akhir berdasarkan jumlah anak
    switch (jumlah_anak) {
        case 1  : gaji_akhir = gaji_bersih + 500000; 
                  break; 
        case 2  : gaji_akhir = gaji_bersih + 1000000; 
                  break; 
        default : gaji_akhir = gaji_bersih + (750000 * jumlah_anak); 
                  break; 
    }
    
    // Menampilkan hasil perhitungan
    cout << "Nama         : " << nama << endl; 
    cout << "Golongan     : " << golongan << endl; 
    cout << "Jumlah anak  : " << jumlah_anak << endl; 
    cout << "Gaji         : Rp. " << gaji_akhir << endl; 
    
    return 0;
}