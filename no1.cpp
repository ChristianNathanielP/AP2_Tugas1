#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int bilangan;

    cout << "Masukkan bilangan bulat: "; //user disuruh memasukan sebuah bilangan bulat
    cin >> bilangan; //membaca inputan dari user

    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl; //kondisi pertama
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl; //kondisi kedua
    }
}