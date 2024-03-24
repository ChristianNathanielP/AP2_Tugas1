#include <iostream>     //header untuk c++
using namespace std;    //agar fungsi-fungsi standar untuk c++ dapat dijalankan
main () 
{
    system("CLS");      //clear screen untuk membersihkan tampilan layar
    int bil;          //deklarasi variabel bil yang bertipe integer
    cout << "========================================\n";
    cout << "Program Menentukan Bilangan Ganjil/Genap\n";
    cout << "========================================\n";
    cout << endl;
    cout << "Masukkan sebuah bilangan : "; cin >> bil;   //meminta user untuk menginput bilangan
    if (bil % 2 == 0) {   //jika bilangan yang diinput habis dibagi 2 
        cout << bil << " adalah bilangan genap";  //maka tampilkan di layar bahwa bilangan tersebut merupakan bilangan genap
    } 
        else if (bil % 2 != 0) {  //jika bilangan yang diinput tidak habis dibagi 2 
            cout << bil << " adalah bilangan ganjil";     //maka tampilkan di layar bahwa bilangan tersebut merupakan bilangan ganjil
        }
}