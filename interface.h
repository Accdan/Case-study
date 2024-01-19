#include <iostream>
#include "insys.h"

using namespace std;

void layout(){
    cout<<"=====UAS MINI PROGRAM===="<<endl;
    cout<<"Capai Skor terbaik untuk mendapatkan nilai dari Bu Tutuk!"<<endl;
    cout<<"Letsgo!!"<<endl;
    cout<<"*Jawab Soal Sesuai dengan pilihan";
    cout<<endl;
}

void pertama(){
    //pertama
        for (int i = 0; i < jumlahPertanyaan; ++i) {
        cout << pertanyaan[i] << ": ";
        getline(cin, jawabanPengguna);

        // Memeriksa jawaban
        if (jawabanPengguna == jawaban[i]) {
            cout << "Jawaban benar! Anda mendapatkan "<<skor[i]<<" poin." << endl;
            hasilskor += skor[i];
        } else {
            cout << "Jawaban salah. Jawaban yang benar adalah: " << jawaban[i] << endl;
        }
        cout<<endl;
    }
    // Menampilkan skor akhir
    cout << "Skor akhir Anda: " << hasilskor << " poin." << endl;
    }
void kedua(){

    //kedua
    
        for (int i = 0; i < jumlahPertanyaan2; ++i) {
        cout << pertanyaan2[i] << ": ";
        getline(cin, jawabanPengguna2);

        // Memeriksa jawaban
        if (jawabanPengguna2 == jawaban2[i]) {
            cout << "Jawaban benar! Anda mendapatkan "<<skor2[i]<<" poin." << endl;
            hasilskor2 += skor2[i];
        } else {
            cout << "Jawaban salah. Jawaban yang benar adalah: " << jawaban2[i] << endl;
        }
        cout<<endl;
    }

    // Menampilkan skor akhir
    cout << "Skor akhir Anda: " << hasilskor2 << " poin." << endl;
}
void ketiga(){

    //kedua
    
        for (int i = 0; i < jumlahPertanyaan3; ++i) {
        cout << pertanyaan3[i] << ": ";
        getline(cin, jawabanPengguna3);

        // Memeriksa jawaban
        if (jawabanPengguna3 == jawaban3[i]) {
            cout << "Jawaban benar! Anda mendapatkan "<<skor3[i]<<" poin." << endl;
            hasilskor3 += skor3[i];
        } else {
            cout << "Jawaban salah. Jawaban yang benar adalah: " << jawaban3[i] << endl;
        }
        cout<<endl;
    }

    // Menampilkan skor akhir
    cout << "Skor akhir Anda: " << hasilskor3 << " poin." << endl;
}


void printSlowly(const string& text, int delay) {
    for (char c : text) {
        cout << c << flush;  // flush untuk memastikan karakter segera tercetak
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

int textinterface1(){

    printSlowly(s1, delay);
    cout<<endl;
    printSlowly(s2, delay);
    cout<<endl;
    printSlowly(s3, delay);
    cout<<endl;
    printSlowly(s4, delay);
    cout << endl;
    cout << "klik Enter untuk masuk ke program..." << endl;
    while (_getch() != 13); // Menunggu hingga Enter ditekan
    system("cls"); // Membersihkan layar
    return 0;
}
int textinterface2(){

    printSlowly(s11, delay);
    cout<<endl;
    printSlowly(s21, delay);
    cout<<endl;
    printSlowly(s22, delay);
    cout<<endl;
    printSlowly(s23, delay);

    return 0;
}
int textinterface3(){
     printSlowly(s24, delay);
    cout<<endl;
    printSlowly(s25, delay);
    cout<<endl;
    printSlowly(s26, delay);
    cout<<endl;
    printSlowly(s27, delay);

    return 0;
}

void mahasiswa1(){
    cout<<"Masukkan Identitas Anda"<<endl;
    cout<<"Masukkan Nama Anda :"; 
    getline(cin,mahasiswa);
    cout<<"NPM                :"; 
    getline(cin,NPM);
    cout<<"Jurusan            :"; 
    getline(cin,jurusan);

}
void showdata(){
    cout<<endl;
    cout<<"Nama     :"<<mahasiswa<<endl;
    cout<<"NPM      :"<<NPM<<endl; 
    cout<<"Jurusan  :"<<jurusan<<endl;
    cout<<"Nilai    :"<<seluruhnilai<<endl;


}
   
