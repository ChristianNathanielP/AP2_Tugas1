#include <iostream>
using namespace std;

int main() 
{
    system("cls");
    int bilangan;

    // input bilangan bulat
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    // menentukan apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    // program selesai
    return 0;
}