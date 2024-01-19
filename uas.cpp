#include <iostream>
#include "interface.h"


using namespace std;

int main() {
   cout<<"====================="<<endl;
   mahasiswa1();
   cout<<"====================="<<endl;
   textinterface1();
   showdata();
   cout<<"====================="<<endl;
   layout();
   cout<<"====================="<<endl;
   do{
   pertama();
   cout<<"====================="<<endl;
   kedua();
   cout<<"====================="<<endl;
   ketiga();
   cout<<"====================="<<endl;

   seluruhnilai=hasilskor+hasilskor2+hasilskor3;
   cout<<"total nilai akhir andalah :"<<seluruhnilai<<endl;
   cout<<"====================="<<endl;
   cout << "klik Enter untuk melihat hasil..." << endl;
   while (_getch() != 13); // Menunggu hingga Enter ditekan
   system("cls"); // Membersihkan layar
   cout<<"====================="<<endl;
   
   showdata();
   if(seluruhnilai==100){
      textinterface2();
   }else if(seluruhnilai<100){
      textinterface3();
   }
   cout<<endl;
   cout<<"Silahkan ngulang!!(yes/no)"<<endl;
   cin>>balik;
   }while(balik=="yes");
}

