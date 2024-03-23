#include <iostream> 
using namespace std;

int main(){
    system ("cls");
    int bilangan; // variabelnya
    cout << "Masukkan sebuah bilangan bulat: " ; cin >> bilangan;
    if (bilangan % 2 == 0) { // maksudnya, apakah 'bilangan' mod 2 itu = 0
        cout << bilangan << " adalah bilangan genap" << endl ;
        
      }  else  { // jika tidak maka tampil ini
        cout << bilangan << " adalah bilangan ganjil" << endl;
    }
}