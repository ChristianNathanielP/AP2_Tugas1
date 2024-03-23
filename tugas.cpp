#include <iostream>
using namespace std;

main () 
{
    system ("CLS"); //untuk membersihkan monitor
    int bilangan;
    
    //meminta inputan dari user
    cout << "Masukkan bilangan bulat : "; cin >> bilangan;
    cout << bilangan << endl;

    system ("CLS");
    //kode untuk seleksi apakah bilangan yang dimasukkan pengguna termasuk bilangan genap atau tidak
    if (bilangan % 2 == 0)  //mod 2 untuk mengidentifikasi apakah bilangan tersebut genap
    {
        cout << bilangan << " termasuk bilangan genap." << endl;
    }
    else 
    {
        cout << " termasuk bilangan ganjil." << endl;
    }
}