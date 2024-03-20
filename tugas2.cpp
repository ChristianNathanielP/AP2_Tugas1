#include <iostream>
using namespace std;
main() {
    system("cls");
    char nama[50];
    int gol,anak, golGaji, gajiAnak;
    cout<<"Masukkan Nama Anda : ";cin>>nama;
    cout<<"Masukkan Golongan(1,2,3) : "; cin>>gol;
    cout<<"Jumlah anak: ";cin>>anak;
    if(gol == 1) { //Golongan 1 -> Gaji pokok = 5.000.000
        golGaji = 5000000; 
    } else if(gol == 2) { //Golongan 2 -> Gaji pokok = 3.000.000
        golGaji = 3000000;
    } else if(gol == 3) { //Golongan 3 -> Gaji pokok = 2.500.000
        golGaji = 2500000;
    } else {
        cout<<"Golongan tidak terdata\n";
        return 1; // Program berhenti karena golongan tidak terdata
    }

    if (anak == 0){ //Tidak ada anak maka tidak ada gaji tambahan
        gajiAnak = 0;
    }
    else if(anak == 1 || anak == 2) { //Jumlah anak 1 dan 2 -> Gaji tambahan = 500.000 per anak
        gajiAnak = 500000 * anak;
    } 
    else if(anak > 2) { //Jumlah anak lebih dari 2 -> Gaji tambahan = 750.000 per anak
        gajiAnak = 750000 * anak;
    }

    cout<<"Gaji total : Rp. "<<(int)((golGaji * 0.95 + gajiAnak))<<",-"; // Perhitungan Gaji, hasil menjadi integer
    return 0;
}