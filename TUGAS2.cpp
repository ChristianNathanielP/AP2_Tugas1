#include <iostream>
#include <iomanip> //digunakan untuk menghilangkan angka dibelakang koma untuk variabel bertipe data float

using namespace std;
int main ()
{
    system ("CLS"); //untuk membersihkan monitor
    string nama;
    int banyak_anak, golongan;
    float tunjangan_anak, gaji_total, pajak;

    cout << "Masukkan nama anda             : ";
    getline(cin, nama);
    cout << "Masukkan Golongan (1/2/3)      : ";   cin >> golongan;
    cout << "Masukkan Jumlah Anak           : ";   cin >> banyak_anak;
    
    float gaji_pokok = 0;
    //seleksi golongan si user
    if (golongan == 1) 
    {
        gaji_pokok = 5000000;
    }
        else if (golongan == 2) 
        {
            gaji_pokok = 3000000;
        }
            else if (golongan == 3) 
            {
                gaji_pokok = 2500000;
            }

    //untuk menyeleksi banyak anak si user
    if (banyak_anak == 1) 
    {
        tunjangan_anak = 500000;
    }
        else if (banyak_anak == 2) 
        {
            tunjangan_anak = 500000;
        }
            else if (banyak_anak > 2) 
            {
                tunjangan_anak = 750000;
            }

    //rumus untuk hasil yang akan ditampilkan
    gaji_total = gaji_pokok * 0.95 + tunjangan_anak * banyak_anak;
    
    cout << fixed << setprecision(0); //digunakan agar tidak ada angka dibelakang koma dan nilai akhir akan dibulatkan

    system("CLS");
    cout << "Nama               : "     <<               nama            << endl;
    cout << "Golongan anda      : "     <<               golongan        << endl;
    cout << "Jumlah anak        : "     <<               banyak_anak     << endl;
    cout << "Gaji Total         : Rp. " << setw(10)  <<  gaji_total      << endl; 
    //fungsi setw(10) digunakan untuk mengatur lebar kolom output menjadi 10 karakter
    
    return(0);
    
}
