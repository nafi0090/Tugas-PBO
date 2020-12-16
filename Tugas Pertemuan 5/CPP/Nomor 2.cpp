#include <iostream>
#include <string>

using namespace std;

class account{
public:
    // Informasi
    int awal;
    int bil2;
    int bil3;
    int bil4;

    //member function
    int getawal ( void );
    int getbeda ( void );
    int getjumlah ( void );
    int getrata ( void );

    //constructor
    account (int inputawal, int inputbil2, int inputbil3, int inputbil4){
        account::awal = inputawal;
        account::bil2 = inputbil2;
        account::bil3 = inputbil3;
        account::bil4 = inputbil4;
    }
};

//deskripsi functionnya
int account::getawal ( void ) {
    return awal;
}

int account::getbeda ( void ) {
    return bil2 - awal;
}

int account::getjumlah ( void ){
    return awal + bil2 + bil3 + bil4;
}

int account::getrata ( void ){
    return ( awal + bil2 + bil3 + bil4 ) / 4;
}

//main program
int main(){

    account account1 = account ( 2, 5, 8, 11);
    cout << " Angkanya adalah 2 5 8 11 " << endl;
    cout << " Nilai awal adalah    " << account1.getawal() << endl;
    cout << " Beda deret adalah    " << account1.getbeda() << endl;
    cout << " Jumlah deret adalah " << account1.getjumlah() << endl;
    cout << " Rata-rata dari deret tersebut adalah " << account1.getrata() << endl;

    return 0;
}
