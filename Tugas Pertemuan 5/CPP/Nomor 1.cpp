#include <iostream>
#include <string>

using namespace std;

class account{
public:
    // Informasi
    int bilangan;

    //member function
    int getbilangan ( void );

    //constructor
    account (int inputbilangan){
        account::bilangan = inputbilangan;

    }
};

//deskripsi functionnya
int account::getbilangan ( void ) {
    return bilangan;
}

//main program
int main(){
    char lagi, ulang;

    lagi='y';
    while(lagi=='y'){

        int b;

        cout << " Masukan Nilai : ";
        cin >> b;

        account account1 = account ( b );
        if ( account1.getbilangan() % 2 == 0){
                if ( account1.getbilangan() > 0){
                    cout << " Nilainya adalah genap " << endl;
                }
                else
                    cout << " Nilainya adalah negatif genap " << endl;
        }
        else {
                if ( account1.getbilangan() > 0){
                    cout << " Nilainya adalah ganjil " << endl;
                }
                else
                    cout << " Nilainya adalah negatif ganjil " << endl;
        }

        do{
            cout<<endl<<"Apakah anda ingin coba lagi? Y/T ";
            cin>>ulang;
            if(ulang=='T'||ulang=='t'){
                lagi='t';
            }
            else if(ulang=='Y'||ulang=='y'){
            }
            else{
                cout<<"Pilihan yang anda masukkan salah";
            }
        }
        while(ulang!='y'&&ulang!='Y'&&ulang!='t'&&ulang!='T');

        cout << endl;
    }
}
