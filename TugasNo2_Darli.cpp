#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel-variabel yang diperlukan
    int golongan, jlh_anak, gaji, gaji_bersih, gaji_total; 
    string nama;  
    // Variabel golongan digunakan untuk menyimpan golongan karyawan.
    // Variabel jlh_anak digunakan untuk menyimpan jumlah anak karyawan.
    // Variabel gaji digunakan untuk menyimpan gaji pokok karyawan berdasarkan golongan.
    // Variabel gaji_bersih digunakan untuk menyimpan gaji bersih setelah dipotong pajak.
    // Variabel gaji_total digunakan untuk menyimpan gaji akhir setelah ditambah tunjangan anak.

    // cout, Menampilkan pesan ke layar agar pengguna dapat memasukkan data yang ingin dicoba
    // cin, Mengambil input angka yang telah dimasukkan oleh pengguna dan menyimpannya dalam variabel angka
    cout << "Masukan Nama Anda                     :   ";  
    cin >> nama;
    cout << "Masukkan Golongan (1, 2, 3)           :   ";  
    cin >> golongan; 
    cout << "Jumlah anak                           :   ";  
    cin >> jlh_anak;

    // Menghitung gaji pokok berdasarkan golongan
    switch (golongan) {
        case 1 : gaji = 5000000; 
                 break; 
        case 2 : gaji = 3000000; 
                 break; 
        default : gaji = 2500000; // Jika golongan tidak valid, maka gaji ke default 2500000
                 break; 
    }
    // Switch-case digunakan untuk menghitung gaji pokok berdasarkan golongan karyawan.
    // Jika golongan adalah 1, gaji akan diatur ke 5.000.000, 
    // Jika 2, gaji diatur ke 3.000.000, 
    // dan jika golongan lain atau tidak valid, gaji akan diatur ke 2.500.000.
    

     // MeMenghitung gaji bersih setelah dipotong pajak sebesar 5% dari gaji pokok.
    gaji_bersih = gaji - (gaji * 0.05); 

    // Menghitung gaji akhir berdasarkan jumlah anak
    switch (jlh_anak) {
        case 1  : gaji_total = gaji_bersih + 500000; 
                  break; 
        case 2  : gaji_total = gaji_bersih + 1000000; 
                  break; 
        default : gaji_total = gaji_bersih + (750000 * jlh_anak); 
                  break; 
    }
    // Switch-case digunakan untuk menghitung gaji akhir berdasarkan jumlah anak.
    // Jika jumlah anak adalah 1, gaji akan ditambah 500.000, 
    // Jika 2, gaji ditambah 1.000.000, 
    // dan jika jumlah anak lainnya, gaji akan ditambah dengan 750.000 dikalikan dengan jumlah anak.
    
    
    // Menampilkan hasil perhitungan
    system ("cls");
    cout << "Nama               : " << nama << endl; 
    cout << "Golongan           : " << golongan << endl; 
    cout << "Jumlah anak        : " << jlh_anak << endl; 
    cout << "Gaji Total         : Rp. " << gaji_total << endl; 
    
    return 0;
}