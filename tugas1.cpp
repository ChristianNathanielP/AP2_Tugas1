#include <iostream>
using namespace std;

main(){
    system("cls");
    int bilangan;
    cout<<"Masukkan bilangan bulat: ";cin>>bilangan;
    if (bilangan % 2 ==0){ //Jika sisa bagi = 0, maka termasuk bilangan genap
        cout<<bilangan<<" adalah bilangan genap"<<endl;
    }
    else{                  //Jika sisa bagi = 1, maka termasuk bilangan genap
        cout<<bilangan<<" adalah bilangan ganjil"<<endl;
    }
}