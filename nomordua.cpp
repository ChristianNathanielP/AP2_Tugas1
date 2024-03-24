#include <iostream> //mengimpor pustaka input output standar C++
#include <iomanip> // mengimpor pustaka untuk mengatur format output, seperti presisi desimal
using namespace std; //menggunakan fungsi standar C++ tanpa menuliskan 'std::' sebelumnya

int main(){ //memulai fungsi utama dari program
    system("CLS"); //Memanggil perintah sistem untuk membersihkan layar konsol
    int JumlahAnak, Golongan; //Mendeklarasikan variabel untuk menyimpan jumlah anak dan golongan karyawan
    char Nama[20]; //Mendeklarasikan array karakter untuk menyimpan nama karyawan dengan panjang maksimum 20 karakter
    float GajiPokok, GajiTotal, Pajak, Tunjangan; //Mendeklarasikan variabel untuk menyimpan gaji pokok, gaji total, pajak, dan tunjangan
    cout << "\nProgram Menghitung Gaji Karyawan"; //menanmpilkan judul program
    cout << "\n--------------------------------"; //menanmpilkan garis putus-putus untuk estetika
    puts(""); //menampilkan baris baru
    cout << "Nama               : "; gets(Nama); //meminta pengguna untuk memasukkan nama karyawan
    cout << "Golongan(1,2,3)    : "; cin >> Golongan; //meminta pengguna untuk memasukkan golongan karyawan
    cout << "Jumlah anak        : "; cin >> JumlahAnak; //Meminta pengguna untuk memasukkan jumlah anak yang dimiliki oleh karyawan
    if (Golongan == 1) { 
        GajiPokok = 5000000; //jika golongan karyawan adalah 1, gaji pokok diatur menjadi 5.000.000
    } else if (Golongan == 2) { 
        GajiPokok = 3000000; //jika golongan karyawan adalah 2, gaji pokok diatur menjadi 3.000.000
    } else if (Golongan == 3) {
        GajiPokok = 2500000; //jika golongan karyawan adalah 3, gaji pokok diatur menjadi 2.500.000
    } else {
        cout << "Golongan Anda Tidak Valid!"; //pesan kesalahan jika golongan tidak valid
    }
    if (JumlahAnak == 0) {
        Tunjangan = 0; //jika karyawan tidak memiliki anak, tunjangan diatur menjadi 0
    } else if (JumlahAnak == 1 | JumlahAnak == 2) {
        Tunjangan = 500000; //jika karyawan memiliki 1 atau 2 anak, tunjangan diatur menjadi 500000
    } else if (JumlahAnak > 2) {
        Tunjangan = 750000; //jika karyawan memiliki lebih dari 2 anak, tunjangan diatur menjadi 750000
    }
    Pajak = GajiPokok * 0.05; //menghitung pajak sebesar 5% dari gaji pokok
    GajiTotal = GajiPokok + (Tunjangan * JumlahAnak) - Pajak; //menghitung gaji total setelah ditambahkan tunjangan setiap anak dan dikurangi pajak
    cout<<fixed<<setprecision(0);  //mengatur presisi desimal menjadi 0 agar hasilnya menjadi bilangan bulat
    cout << "Gaji Total         : Rp. " << GajiTotal << ",-"; //menampilkan gaji total ke layar dengan format yang sesuai
}//program selesai