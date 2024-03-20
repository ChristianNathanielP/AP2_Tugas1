#include <iostream>
using namespace std;

main()
{
    int b; //variabel adalah bilangan bulat
    
    system("CLS"); //membersihkan layar

    cout<<"Masukkan sebuah bilangan bulat : "; cin>>b; //meminta input bilangan bulat

    if (b==0){          //karena 0 bukan bilangan genap maupun ganjil
        cout<<b<<" Merupakan bilangan 0"<<endl;
    } else if (b%2==0){ //jika modulus 2 suatu bilangan adalah 0, maka bilangan tersebut genap
        cout<<b<<" Merupakan bilangan genap"<<endl;
    } else{             //jika modulus 2 suatu bilangan bukan 0, maka bilangan tersebut ganjil
        cout<<b<<" Merupakan bilangan ganjil"<<endl;
    }

    system("pause"); //membuat jeda
}