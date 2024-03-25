#include <iostream>
using namespace std;

main(){
    int golongan, jumlahanak, gaji, gajibersih, gajiakhir; 
    string nama;  

    cout << "Nama anda                 :   ";  cin >> nama;
    cout << "Golongan anda (1, 2, 3)   :   ";  cin >> golongan; 
    cout << "Jumlah anak anda          :   ";  cin >> jumlahanak;

    switch (golongan)
    {
        case 1 : gaji = 5000000; 
        break; 
        case 2 : gaji = 3000000; 
        break; 
        default : gaji = 2500000;
        break; 
    }
    gajibersih = gaji - gaji * 0.05; 
    switch (jumlahanak) 
    {
        case 1  : gajiakhir = gajibersih + 500000; 
        break; 
        case 2  : gajiakhir = gajibersih + 1000000; 
        break; 
        default : gajiakhir = gajibersih + 750000 * jumlahanak; 
        break; 
    }
    cout << "Nama : " << nama << endl; 
    cout << "Golongan : " << golongan << endl; 
    cout << "Jumlah anak : " << jumlahanak << endl; 
    cout << "Gaji : " << gajiakhir << endl; 
}