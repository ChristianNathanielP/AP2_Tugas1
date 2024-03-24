#include <iostream>     //header untuk c++
#include <iomanip>      //header untuk mengatur tata letak output. Pada program ini digunakan agar fixed<<setprecision(0) dapat berfungsi
using namespace std;    //agar fungsi-fungsi standar untuk c++ dapat dijalankan
main () {

    system("CLS");      //clear screen untuk membersihkan tampilan layar
    string nama;        //deklarasi variabel nama bertipe data string
    int Gol, JumlahAnak;    //deklarasi variabel untuk Golongan dan Jumlah Anak bertipe data integer
    float GajiPokok, TunjanganAnak, GajiBersih, Pajak;   //deklarasi variabel untuk Gaji Pokok, Tunjangan Anak, Gaji Bersih, dan Pajak yang bertipe data float
    cout << "==========Program Menghitung Gaji==========\n";
    cout << "Masukkan Nama Anda        : "; cin >> nama;    //meminta user untuk menginput nama
    getline(cin, nama);     //getline untuk membaca spasi jika user memasukkan nama lebih dari 1 kata
    cout << "Masukkan Golongan (1/2/3) : "; cin >> Gol; //meminta user untuk menginput golongan
    cout << "Jumlah Anak               : "; cin >> JumlahAnak;  //meminta user untuk menginput jumlah anak

    if (Gol == 1) {     //jika golongan 1 maka gaji pokoknya 5000000
        GajiPokok = 5000000;
    } 
        else if (Gol == 2) {    //jika golongan 2 maka gaji pokoknya 3000000
            GajiPokok = 3000000;
        }
            else if (Gol == 3) {    //jika golongan 2 maka gaji pokoknya 250000
                GajiPokok = 2500000;
            }
                else {
                    cout << "Golongan yang anda tidak valid";   //jika golongan yang dimasukkan selain 1/2/3 maka golongan tidak valid dan program tidak menghitung gaji total
                    return 0;
                }
    if (JumlahAnak == 1 || JumlahAnak == 2) {   //jika jumlah anak 1 atau 2 maka tunjangan anak sebesar 500000/anak
        TunjanganAnak = 500000 * JumlahAnak;
    }
        else if (JumlahAnak > 2) {
            TunjanganAnak = 750000 * JumlahAnak;    //jika jumlah anak lebih dari 2 maka tunjangan anak sebesar 750000/anak
        }
            else {
                TunjanganAnak = 0;  //jika tidak memiliki anak maka tidak ada tunjangan anak
            }

    cout << fixed << setprecision(0);   //mengatur angka di belakang koma. setprecision(0) berarti 0 angka di belakang koma

    Pajak = GajiPokok * 0.05;   //menghitung pajak
    GajiBersih = GajiPokok - Pajak + TunjanganAnak; //menghitung total gaji bersih

    cout << "Gaji Total                : Rp. " << GajiBersih << endl;   //menampilkan total gaji bersih
}