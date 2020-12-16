#include <iostream>
#include <string>

using namespace std;

class account{
public:
    // Informasi
    int saldoawal;
    int debit;
    int credit;

    //member function
    int getdebit ( void );
    int getcredit ( void );
    int getbalance ( void );

    //constructor
    account (int inputSawal, int inputdebit, int inputcredit){
        account::saldoawal = inputSawal;
        account::debit = inputdebit;
        account::credit = inputcredit;
    }
};

//deskripsi functionnya
int account::getdebit ( void ) {
    return saldoawal - debit;
}

int account::getbalance ( void ) {
    return saldoawal;
}

int account::getcredit ( void ){
    return saldoawal + credit;
}

//main program
int main(){
    account account1 = account ( 1000000, 300000, 250000);
    if (account1.saldoawal > 0){
        cout << " Saldo Awal : " << account1.saldoawal << endl;
    }
    else{
        cout << " saldo yang anda input 0 " << endl;
    }
    cout << " saldo yang anda Ambil adalah " << account1.debit << endl;
    if (account1.saldoawal > account1.debit ){
        cout << " Debit      : " << account1.debit << endl;
        cout << " Sisa saldo anda adalah " << account1.saldoawal - account1.debit << endl;
    }
    else {
        cout << " Saldo Anda kurang, saldo anda " << account1.saldoawal;
    }
    cout << " saldo yang anda tambah adalah " << account1.credit << endl;
    cout << " Saldo anda sekarang adalah : " << account1.getcredit();

    cout << endl << endl;

    account account2 = account ( 1500000, 3000000, 2500000);
    if (account2.saldoawal > 0){
        cout << " Saldo Awal : " << account2.saldoawal << endl;
    }
    else{
        cout << " saldo yang anda input 0 " << endl;
    }
    cout << " saldo yang anda Ambil adalah " << account2.debit << endl;
    if (account2.saldoawal > account2.debit ){
        cout << " Debit      : " << account2.debit << endl;
        cout << " Sisa saldo anda adalah " << account2.saldoawal - account2.debit << endl;
    }
    else {
        cout << " Saldo Anda kurang, saldo anda " << account2.saldoawal << endl;
    }
    cout << " saldo yang anda tambah adalah " << account2.credit << endl;
    cout << " Saldo anda sekarang adalah : " << account2.getcredit() << endl;

    return 0;
}
