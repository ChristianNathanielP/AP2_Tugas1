#include <iostream>
using namespace std;

int main() 
{
    // pembersih
    system ("cls"); 
    
    // tipe data
    string nama;
    int golongan,gaji_pokok,anak,tambahan_anak,gaji_total;
    float pajak;

    // input nama dan golongan
    cout << "Masukkan Nama Anda : " ;
    getline (cin, nama);
    cout << "---------------------------" << endl;
    cout << "        Pilihan Anda       " << endl;
    cout << "---------------------------" << endl;
    cout << "1. Golongan gaji I (5.000.000)" << endl;
    cout << "2. Golongan gaji II (3.000.000)" << endl;
    cout << "3. Golongan gaji III (2.500.000)" << endl;
    cout << "---------------------------" << endl;
    
    cout << "Masukkan golongan anda: ";
    cin >> golongan;

    // operasi aritmatika untuk gaji pokok dan pajak
    if (golongan == 1) {
        gaji_pokok = 5000000;
        pajak = 0.05 * gaji_pokok;
    } else if (golongan == 2) {
        gaji_pokok = 3000000;
        pajak = 0.05 * gaji_pokok;
    } else if (golongan == 3) {
        gaji_pokok = 2500000;
        pajak = 0.05 * gaji_pokok;
    } else {
        cout << "Tidak valid " << golongan << endl;
        return 0;
    }

    // input jumlah anak
    cout << "Masukkan Banyak Anak : " ;
    cin >> anak;
    if (anak == 1){
        tambahan_anak = 500000;
    } else if (anak == 2){
        tambahan_anak = 500000;
    } else if (anak >= 3){
        tambahan_anak = anak * 750000;
    } else {
        tambahan_anak = 0;
    }

    // operasi aritmatika menghitung gaji total
    gaji_total = gaji_pokok + tambahan_anak - pajak; 

    // hasil
    cout << "Gaji total  : Rp." << gaji_total<< endl;

    // program selesai
    return 0;
}