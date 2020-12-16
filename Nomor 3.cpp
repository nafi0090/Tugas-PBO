#include <iostream>
#include <string>

using namespace std;

class invoice{
public:
    string nama;
    string deskripsi;
    int jumlah;
    int harga;
    int getinvoice (void);

    invoice ( string inputnama, string inputdes, int inputjum, int inputhar) {
        invoice::nama = inputnama;
        invoice::deskripsi = inputdes;
        invoice::jumlah = inputjum;
        invoice::harga = inputhar;
    }
};

int invoice::getinvoice ( void ) {
    return harga * jumlah;
}

int main (){
    int total;

    invoice invoice1 = invoice ( "Roti Bakar ", "Roti dibakar ", 5, 17500);
    cout << " Nama      : " << invoice1.nama << endl;
    cout << " Deskripsi : " << invoice1.deskripsi << endl;
    cout << " Jumlah    : " << invoice1.jumlah << " potong" << endl;
    cout << " Harga     : Rp " << invoice1.harga << endl;
    total = invoice1.getinvoice();
    if (total > 0){
        cout << " Total     : Rp " << total << endl;
    }
    else
        cout << " Total harga tidak positif, O" << endl;

    cout << endl;

    invoice invoice2 = invoice ( "Terang Bulan ", "Adonan + Topping ", 5, 22500);
    cout << " Nama      : " << invoice2.nama << endl;
    cout << " Deskripsi : " << invoice2.deskripsi << endl;
    cout << " Jumlah    : " << invoice2.jumlah << " potong" << endl;
    cout << " Harga     : Rp " << invoice2.harga << endl;
    total = invoice2.getinvoice();
    if (total > 0){
        cout << " Total     : Rp " << total << endl;
    }
    else
        cout << " Total harga tidak positif, O" << endl;

    return 0;
}
