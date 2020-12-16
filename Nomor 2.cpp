#include <iostream>
#include <string>

using namespace std;

class employe{
public:
    string namadpn;
    string namablkng;
    int gaji;


    employe( string inputnamadpn, string inputnamablkng, int inputgaji){
        employe::namadpn = inputnamadpn;
        employe::namablkng = inputnamablkng;
        employe::gaji = inputgaji;
    }
};

int main(){
    employe employe1= employe("Zi", "Long", 1000);
    cout << "Nama Depan    : " << employe1.namadpn << endl ;
    cout << "Nama Belakang : " << employe1.namablkng << endl ;
    cout << "Gaji Bulanan  : " << employe1.gaji << endl ;
    cout << "Gaji Tahunan  : " << employe1.gaji * 12 << endl ;
    if (employe1.gaji > 0){
        cout << "Gaji tahunan akan ditambah 10 %" << endl;
        cout << "Gaji Tahun ini adalah : " << employe1.gaji * 12 * 10/100 + employe1.gaji *12 <<endl;
    }
    else{
        cout << "Gaji sudah tidak Aktif = 0 "<< endl;
    }

    cout << endl;

    employe employe2= employe("John", "Shon", 18000);
    cout << "Nama Depan    : " << employe2.namadpn << endl ;
    cout << "Nama Belakang : " << employe2.namablkng << endl ;
    cout << "Gaji Bulanan  : " << employe2.gaji << endl ;
    cout << "Gaji Tahunan  : " << employe2.gaji * 12 << endl ;
    if (employe2.gaji > 0){
        cout << "Gaji tahunan akan ditambah 10 %" << endl;
        cout << "Gaji Tahun ini adalah : " << employe2.gaji * 12 * 10/100 + employe2.gaji *12 <<endl;
    }
    else{
        cout << "Gaji sudah tidak Aktif = 0 " << endl;
    }
    return 0;
}
