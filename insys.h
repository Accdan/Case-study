#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;
//pertama
string pertanyaan[] = {
"Apa ibukota Indonesia?",
"Siapakah presiden Indonesia saat ini?",
"Berapa hasil dari 5 + 7?",
"Dosen informatika kelas P adalah?"
};
string jawaban[] = {
"Jakarta",
"Joko Widodo",
"12",
"Tutuk Indriyani"
};

//kedua
string pertanyaan2[]= {
"20+_=300",
"jika agus membawa 2 ekor sapi dengan berat 1ton,berapa berat 2 ekor sapi tersebut?",
"agus memiliki 12 apel, 2 dimakan wahyu,kemudian di berikan ke roni 5 sedangkan apel tersebut busuk 3, berapa sisa apel agus?",
"12+12+12+9+1-30="
};
string jawaban2[]= {
"280",
"2 ton",
"2",
"16"
};

//ketiga
string pertanyaan3[]= {
"Mobil adalah kendaraan yang memiliki roda?",
"sebuah hewan memiliki 4 kaki,dan satu hidung panjang. apakah aku?",
"jika andy belari sejauh 1km, berapa konversi jarak lari andy dalam cm?",

};
string jawaban3[]= {
"4",
"Gajah",
"1000cm",
};

int skor3[] = {9,10,10};
int skor2[] = {5,5,10,1};
int skor[] = {10, 15, 15, 10};

int hasilskor = 0;
int hasilskor2 = 0;
int hasilskor3 = 0;


string jawabanPengguna;
int jumlahPertanyaan = sizeof(pertanyaan) / sizeof(pertanyaan[0]);
string jawabanPengguna2;
int jumlahPertanyaan2 = sizeof(pertanyaan2) / sizeof(pertanyaan2[0]);
string jawabanPengguna3;
int jumlahPertanyaan3 = sizeof(pertanyaan3) / sizeof(pertanyaan3[0]);

string mahasiswa;
string NPM;
string jurusan;
int seluruhnilai;



    string s1 = "OH TIDAK!!";
    string s2 = "Nilai sekarang kurang di mata kuliah Pemrograman Terstruktur";
    string s3 = "Kamu harus memperbaikinya sekarang!!";
    string s4 = "Semangat memperbaiki nilai!!";

    string s11 = "Wah nilai kamu sudah sempurna!!";
    string s21 = "bagus sekali!!";
    string s22 = "Kerja kerasmu membuahkan hasil yang bagus";
    string s23 = "yasudah waktunya tidurr!!";

    string s24 = "Nilaimu masih kurang!!";
    string s25 = "REMED!!";
    string s26 = "Kerjakan lagi, sampai nilaimu sempurna";
    string s27 = "terus tidurr!!";


    string balik = "yes";
    int delay=20;