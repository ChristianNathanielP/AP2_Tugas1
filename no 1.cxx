#include <iostream>
using namespace std; //Permulaan

int main () { //Mulai
    
    int bil; 
    
    cout<<"Masukkan Bilangan: "; cin>>bil;  cout<<endl; //Input
   
    //Kondisi Dan Outputnya
   if (bil == 0) { 
       cout<<bil<<" Adalah Bilangan 0"<<endl;
   }
       else if (bil % 2 == 0){
           cout<<bil<<" Adalah Bilangan Genap"<<endl;
       }
       else {
           cout<<bil<<" Adalah Bilangan Ganjil"<<endl;
       }
       
       return 0;
       
} //Selesai