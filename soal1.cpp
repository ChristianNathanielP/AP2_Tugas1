#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int bilangan;

    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}