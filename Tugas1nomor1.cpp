#include <iostream> //agar bisa menggunakan cout dan cin
using namespace std; //agar tidak perlu mengetik std pada setiap cout dan cin

main() //isi program
{
    system ("CLS"); //untuk membersihkan layar terminal ketika di compile
    int input; //membuat variabel

    cout << "masukkan bilangan anda : "; cin >> input; //tempat untuk menginput bilangan

    if (input % 2 == 0) //menggunakan operator modulus untuk memerika apakah bilangan genap atau ganjil
    {
        cout << input << " adalah bilangan genap" << endl; //untuk menampilkan hasil jika bilangan merupakan bilangan genap
    }
    else //untuk mengeksekusi line bila hasilnya bukan bilangan genap
    {
        cout << input << " adalah bilangan ganjil" << endl; //untuk menampilkan hasil jika bilangan merupakan bilangan ganjil
    }
}