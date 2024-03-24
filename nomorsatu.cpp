#include <iostream> //mengimpor pustaka input output standar C++
using namespace std; //menggunakan fungsi standar C++ tanpa menuliskan 'std::' sebelumnya

int main(){ //memulai fungsi utama dari program
    system("CLS"); //Memanggil perintah sistem untuk membersihkan layar konsol
    int bilangan; //mendeklarasikan variabel untuk menyimpan bilangan
    cout << "Masukkan bilangan : "; //meminta pengguna untuk memasukkan sebuah bilangan
    cin >> bilangan; //menyimpan inputan pengguna ke dalam variabel 'bilangan'
    if (bilangan % 2 == 0) { 
        cout << bilangan << " adalah bilangan genap"; //jika bilangan mod 2 = 0 , menampilkan bilangan tersebut adalah bilangan genap
    } else {
        cout << bilangan << " adalah bilangan ganjil"; //selain kondisi 1 , menampilkan bilangan tersebut adalah bilangan ganjil
    } 
}//program selesai