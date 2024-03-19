#include <iostream>
using namespace std;

int main(){
    system("CLS"); //Menghapus text yang tidak perlu yg ada di terminal

    int bil;
    
    cout << "Masukkan sebuah bilangan: \n"; cin >> bil; //User akan memasukkan sebuah bilangan bulat

    system("CLS");

    if (bil % 2 == 0){
        cout << bil << " adalah bilangan genap"; //Hasil jika bilangan bulat merupakan bilangan genap
    } else {
        cout << bil << " adalah bilangan ganjil"; //Hasil jika bilangan bulat merupakan bilangan ganjil
    }
    return 0; //Berfungsi untuk menutup program utama
}