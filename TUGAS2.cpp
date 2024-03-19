#include <iostream>
#include <iomanip> //digunakan untuk menghilangkan angka dibelakang koma untuk variabel bertipe data float

using namespace std;
int main ()
{
    system ("CLS"); //untuk membersihkan monitor
    int banyak_anak;
    string golongan;
    float tunjangan_anak, gaji_bersih, gaji_kotor, pajak;
    
    cout << "Masukkan Golongan (I/II/III)   : ";   cin >> golongan;
    cout << "Masukkan Jumlah Anak           : ";   cin >> banyak_anak;
    
    float gaji_pokok = 0;
    //seleksi golongan si user
    if (golongan == "I") 
    {
        gaji_pokok = 5000000;
    }
        else if (golongan == "II") 
        {
            gaji_pokok = 3000000;
        }
            else if (golongan == "III") 
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
    gaji_kotor   = gaji_pokok + tunjangan_anak;
    pajak       = gaji_kotor * 0.05;
    gaji_bersih = gaji_kotor - pajak;
    
    cout << fixed << setprecision(0); //digunakan agar tidak ada angka dibelakang koma dan nilai akhir akan dibulatkan
    
    system("CLS");
    cout << "Golongan anda      : "     <<               golongan        << endl;
    cout << "Jumlah anak        : "     <<               banyak_anak     << endl;
    cout << "Gaji Pokok         : Rp. " << setw(10)  <<  gaji_pokok      << endl;
    cout << "Tunjangan Anak     : Rp. " << setw(10)  <<  tunjangan_anak  << endl;
    cout << "Gaji Kotor         : Rp. " << setw(10)  <<  gaji_kotor      << endl; 
    cout << "Gaji Bersih        : Rp. " << setw(10)  <<  gaji_bersih     << endl;
    //fungsi setw(10) digunakan untuk mengatur lebar kolom output menjadi 10 karakter
    
    return(0);
    
}
