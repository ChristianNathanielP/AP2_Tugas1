#include <iostream> // Mengimpor pustaka iostream untuk input-output standar.
#include <cstdlib>  // Mengimpor pustaka cstdlib untuk menggunakan fungsi system().
using namespace std; // Menggunakan namespace std untuk mempermudah penggunaan objek dari pustaka standar.

int main() { // Fungsi utama program.
    system("cls"); // Menggunakan fungsi system("cls") untuk membersihkan layar (hanya berfungsi di Windows).

    // Meminta pengguna memasukkan bilangan bulat setelah layar bersih.
    cout << "Hai! Tolong masukkan sebuah bilangan bulat: "; 

    int bilangan; // Variabel untuk menyimpan bilangan yang dimasukkan pengguna.
    cin >> bilangan; // Mengambil input dari pengguna dan menyimpannya ke dalam variabel bilangan.

    // Memeriksa apakah bilangan tersebut genap atau ganjil dan memberikan respons yang sesuai.
    if (bilangan % 2 == 0) { // Jika bilangan habis dibagi 2 (genap)...
        cout << "Wah, " << bilangan << " adalah bilangan genap. Keren!" << endl; // Memberikan pesan yang sesuai.
    } else { // Jika bilangan tidak habis dibagi 2 (ganjil)...
        cout << "Hmm, " << bilangan << " adalah bilangan ganjil. Menarik!" << endl; // Memberikan pesan yang sesuai.
    }

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dijalankan dengan sukses.
}