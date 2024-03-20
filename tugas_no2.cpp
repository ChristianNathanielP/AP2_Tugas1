#include <iostream>
#include <cstdlib> // menggunakan library cstdlib agar bisa menggunakan exit(0)
using namespace std;

main()
{
    string nama;
    int golongan,anak;
    long gaji,g1,g2; // menggunakan long karena nilainya besar  
    // g1 : gaji sesuai golongan, g2 : gaji sesudah potong pajak, gaji : gaji setelah tambahan anak

    system("CLS"); // clear screen

    cout << "Masukkan nama anda             : "; getline(cin, nama); // menggunakan getline agar spasi bisa dibaca
    cout << "Masukkan golongan anda (1,2,3) : "; cin >> golongan;    
    cout << "Masukkan jumlah anak anda      : "; cin >> anak;

    if (golongan == 1){ // menyeleksi golongan
        g1 = 5000000;
    } else if (golongan == 2){
        g1 = 3000000;
    } else if (golongan == 3){
        g1 = 2500000;
    } else {
        cout << "Golongan tidak ada"; exit(0); // keluar dari program karena golongan tidak ada
    }

    g2 = g1 - (g1 * 0.05); // gaji setelah dipotong pajak
    
    if (anak == 0) { // menyeleksi jumlah anak
        gaji = g2;
    } else if (anak == 1){
        gaji = g2 + 500000;
    } else if (anak == 2){
        gaji = g2 + 2 * 500000;
    } else if (anak > 2){
        gaji = g2 + anak * 750000;
    }                // gaji setelah seleksi jumlah anak

    system("CLS");
    
    cout << "Nama        : " << nama << endl;
    cout << "Golongan    : " << golongan << endl;
    cout << "Jumlah anak : " << anak << endl;
    cout << "Gaji total  : Rp. " << gaji << ",-" << endl;

    system("pause"); // membuat jeda program

}
