#include <iostream>
using namespace std; //Permulaan

int main () { //Mulai
    
    string nama;
    char gol; 
    int                      //Deklarasi Variabel
    anak, 
    gaji_pokok, 
    pajak_gaji, 
    gaji_potong, 
    tunjang, gaji_bersih;
    
    //Input
    cout<<"Masukkan Nama Anda: "; getline(cin,nama); cout<<endl;
    cout<<"Masukkan Golongan(1,2,3): "; cin>>gol; cout<<endl;
    cout<<"Masukkan Jumlah Anak Anda: "; cin>>anak; cout<<endl;
    
    //Kondisi Untuk Golongan
    switch (gol) {
    case '1': 
        gaji_pokok = 5000000;
        pajak_gaji = gaji_pokok * 5/100;
        gaji_potong = gaji_pokok - pajak_gaji;
        break;
    
    case '2':
        gaji_pokok = 3000000;
        pajak_gaji = gaji_pokok * 5/100;
        gaji_potong = gaji_pokok - pajak_gaji;
        break;
    
    case '3':
        gaji_pokok = 2500000;
        pajak_gaji = gaji_pokok * 5/100;
        gaji_potong = gaji_pokok - pajak_gaji;
        break;
        
        default: 
        gaji_pokok = 0;
        pajak_gaji = gaji_pokok * 5/100;
        gaji_potong = gaji_pokok - pajak_gaji;
    }
    
    //Kondisi Untuk Tunjangan
    if (anak <= 2) {
        tunjang = anak * 500000;
    }
    else if (anak > 2) {
        tunjang = anak * 750000;
    }
        else {
            tunjang = 0;
        }
        
        //Rumus Gaji Total
        gaji_bersih = gaji_potong + tunjang;
       
       getchar();
       system("cls");
        //Output
        cout<<"Nama: "<<nama<<endl;
        cout<<"Golongan: "<<gol<<"//Gaji Setelah Pajak: "<<gaji_potong<<endl;
        cout<<"Jumlah Anak: "<<anak<<"//Jumlah Tunjangan: "<<tunjang<<endl;
        cout<<"Gaji Total: "<<gaji_bersih<<endl;
        
    return 0;
} // Selesai