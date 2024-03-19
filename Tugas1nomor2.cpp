#include <iostream> //agar bisa menggunakan cout dan cin
using namespace std; //agar tidak perlu mengetik std pada setiap cout dan cin

main() //isi program
{
    system ("CLS"); //untuk membersihkan layar terminal ketika di compile
    int Golongan, Anak, Gaji, GajiB, GajiF; //membuat variabel
    string Nama; //membuat variabel
    bool opsi = true; //sebagai penentu opsi yang dimasukkan benar atau salah
    cout << "Silahkan isi data diri anda\n"; //intro pengisian data diri

    cout << "Masukkan nama anda                 :   ";  getline (cin, Nama); //menggunakan getline agar bisa membaca string dengan spasi dan simbol-simbol
    cout << "Masukkan golongan anda (1, 2, 3)   :   ";  cin >> Golongan; //untuk memasukkan golongan
    cout << "Masukkan jumlah anak anda          :   ";  cin >> Anak; //untuk memasukkan jumlah anak

    switch (Golongan) //untuk mengeksekusi salah satu line yang akan dijalankan
    {
        case 1 : Gaji = 5000000; //untuk mengeksekusi line bila inputnya 1
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
        case 2 : Gaji = 3000000; //untuk mengeksekusi line bila inputnya 2
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
        case 3 : Gaji = 2500000; //untuk mengeksekusi line bila inputnya 3
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
        default : cout << "Opsi anda tidak ada dalam pilihan"; //untuk mengeksekusi line bila inputnya tidak ada diantara case yang lain
        opsi = false; //untuk memberi kondisi false
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
    }
    if (!opsi) //untuk menentukan kondisi opsi
    {
        return 1; //untuk menghentikan progress jika opsi false
    }
    GajiB = Gaji * 0.05; //untuk membuat gaji bersih
    switch (Anak) //untuk mengeksekusi salah satu line yang akan dijalankan
    {
        case 1  : GajiF = GajiB + 500000; //untuk mengesekusi line bila inputnya 1
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
        case 2  : GajiF = GajiB + 1000000; //untuk mengesekusi line bila inputnya 2
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
        default : GajiF = GajiB + 750000 * Anak; //untuk mengeksekusi line bila inputnya tidak ada diantara case yang lain
        break; //untuk menghentikan ekskeusi line dan menjalankan case berikutnya
    }
    cout << "-" << endl; //untuk memisahkan baris
    cout << "Nama anda : " << Nama << endl; //untuk menampilkan nama
    cout << "Anda Golongan ke : " << Golongan << endl; //untuk menampilkan golongan ke berapa
    cout << "Jumlah anak anda : " << Anak << endl; //untuk menampilkan jumlah anak
    cout << "Gaji bersih anda : " << "Rp." << GajiF << endl; //untuk menampilkan Gaji Final
}