#include <iostream>
#include <string>

using namespace std;

class conan{
public:
    // Informasi
    string judul;
    string nama_pengarang;
    int tahun;
    string sinopsis;
    int harga_beli;

    //member function
    int getjual ( void );

    //constructor
    conan (string inputjdl, string inputnamap, int inputthn, string inputsinop, int inputharga){
        conan::judul = inputjdl;
        conan::nama_pengarang = inputnamap;
        conan::tahun = inputthn;
        conan::sinopsis = inputsinop;
        conan::harga_beli = inputharga;
    }
};

//deskripsi functionnya
int conan::getjual ( void ) {
    return harga_beli - harga_beli * 20 / 100 ;
}
//main program
int main(){

    conan novel1 = conan (
            "Bumi",
            "Tere Liye",
            2014,
            "Raib adalah seorang remaja putri berusia 15th. Dia hidup bersama dengan kedua orangtuanya. Dia mempunyai 2 ekor kucing si putih dan si hitam. Dia juga bersekolah seperti remaja kebanyakan dan mempunyai seorang teman dekat bernama Seli.",
            88000);
    cout << " Judul Novel    : " << novel1.judul << endl;
    cout << " Nama Pengarang : " << novel1.nama_pengarang << endl;
    cout << " Tahun Terbit   : " << novel1.tahun << endl;
    cout << " Sinopsis : " << novel1.sinopsis << endl;
    cout << " Harga Beli : " << novel1.harga_beli << endl;
    cout << " Harga Jual : " << novel1.getjual() << endl;

    cout << endl;

    conan novel2 = conan (
            "Bulan",
            "Tere Liye",
            2015,
            "Buku Novel Bulan karya Tere Liye ini merupakan buku kedua dari serial novel Bumi. Jika di novel Bumi menceritakan petualangan di klan Bulan, maka novel Bulan ini menceritakan petualangan di klan Matahari.",
            95000);
    cout << " Judul Novel    : " << novel2.judul << endl;
    cout << " Nama Pengarang : " << novel2.nama_pengarang << endl;
    cout << " Tahun Terbit   : " << novel2.tahun << endl;
    cout << " Sinopsis : " << novel2.sinopsis << endl;
    cout << " Harga Beli : " << novel2.harga_beli << endl;
    cout << " Harga Jual : " << novel2.getjual() << endl;

    cout << endl;

    conan novel3 = conan (
            "Matahari",
            "Tere Liye",
            2016,
            "Raib, Ali, dan Seli dirundung duka atas tewasnya Ily, sahabat mereka, pada pertarungan di Klan Matahari. Tak hanya mereka, para kesatria Klan Bulan juga merasakan hal sama, sampai membuat Miss Selena tak bisa kembali ke Klan Bumi.",
            95000);
    cout << " Judul Novel    : " << novel3.judul << endl;
    cout << " Nama Pengarang : " << novel3.nama_pengarang << endl;
    cout << " Tahun Terbit   : " << novel3.tahun << endl;
    cout << " Sinopsis : " << novel3.sinopsis << endl;
    cout << " Harga Beli : " << novel3.harga_beli << endl;
    cout << " Harga Jual : " << novel3.getjual() << endl;

    return 0;
}
