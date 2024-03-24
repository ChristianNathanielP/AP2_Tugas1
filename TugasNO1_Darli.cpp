#include <iostream>
using namespace std;

int main()
{
    int angka; // Deklarasi variabel angka berguna untuk menyimpan input dari angka yang dimasukkan oleh pengguna
    
    // Menampilkan pesan ke layar agar pengguna dapat memasukkan angka yang ingin dicoba
    cout << "Masukkan angka : ";

    // Mengambil input angka yang telah dimasukkan oleh pengguna dan menyimpannya dalam variabel angka
    cin >> angka;
    
    // Memeriksa apakah angka yang telah dimasukkan oleh pengguna genap atau ganjil
    if (angka % 2 == 0){
        // Jika angkanya habis dibagi 2, maka angka tersebut berupa genap
        cout << angka << " Merupakan bilangan genap " << endl;
    }
    else
    {
        // Jika angkanya tidak habis dibagi 2, maka angka tersebut berupa ganjil
        cout << angka << " Merupakan bilangan ganjil " << endl;
    }

    //  Menandakan bahwa program telah berakhir dan mengembalikan nilai 0, menunjukkan bahwa program telah berjalan dengan sukses.
    return 0;
}