#include <iostream>
#include <string> // merupakan bagian dari Standar Pustaka C++ (STL) dan menyediakan fasilitas untuk bekerja dengan string
using namespace std;

int main() {

    system("CLS"); // menghapus teks pada terminal

    string nama;
    int gol, anak;
    const int gaji_gol[] = {5000000, 3000000, 2500000};
    const float pajak = 0.05;
    const int tambahan_anak_dua = 500000, tambahan_anak_lebih_dari_dua = 750000;
    
    //User menginputkan Nama, golongan, serta jumlah anak.
    cout << "Masukkan Nama Anda: "; 
    getline(cin, nama);
    cout << "Masukkan Golongan (1, 2, 3): ";
    cin >> gol;
    cout << "Jumlah anak: ";
    cin >> anak;
    

    //penggunaan switch case dalam pemilihan golongan
    int gaji_pokok;
    switch (gol) {
        case 1:
            gaji_pokok = gaji_gol[0];
            break;
        case 2:
            gaji_pokok = gaji_gol[1];
            break;
        case 3:
            gaji_pokok = gaji_gol[2];
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            return 1;
    }
    
    float total_pajak = gaji_pokok * pajak;
    int tambahan_anak = 0;
    
    //Menentukan tambahan gaji dari jumlah anak yang dimiliki, menggunakan switch case.
    switch (anak) {
        case 0:
            tambahan_anak = 0;
            break;
        case 1:
        case 2:
            tambahan_anak = anak * tambahan_anak_dua;
            break;
        default:
            tambahan_anak = (anak - 2) * tambahan_anak_lebih_dari_dua + (2 * tambahan_anak_dua);
            break;
    }
    
    //kalkulasi total gaji yang didapatkan
    int gajitot = gaji_pokok + tambahan_anak - total_pajak;

    //Output program
    cout << "Gaji total untuk " << nama << " adalah: Rp. " << gajitot << endl;
    
    return 0;
}
