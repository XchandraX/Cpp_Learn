#include <iostream>
using namespace std;

int main() {
    int Angka1, Angka2, Tambah, Kurang, Kali, Bagi;
    string operasi;
    
    cout << "=========================" << endl;
    cout << "       Kalkulator        " << endl;
    cout << "=========================\n" << endl;
    
    cout << "Masukkan Angka Pertama:";
    cin >> Angka1;
    
    cout << "Masukkan Angka Kedua:";
    cin >> Angka2;

    cout << "\nMasukkan Operasi: ";
    cin >> operasi;
    
    Tambah = Angka1 + Angka2;
    Kurang = Angka1 - Angka2;
    Kali = Angka1 * Angka2;
    Bagi = Angka1 / Angka2;
    
    cout << "\n=====================================" << endl;
    cout << "       Semua Hasil Kalkulator        " << endl;
    cout << "=====================================\n" << endl;

    if (operasi == "tambah") {
        cout << "Tambah: " << Tambah << endl;
    }else if (operasi == "kurang") {
        cout << "Kurang: " << Kurang << endl;
    }else if (operasi == "kali"){
        cout << "Kali: " << Kali << endl;
    }else if (operasi == "bagi") {
        cout << "Bagi: " << Bagi << endl;
    }else{
        cout << "Tambah: " << Tambah << endl;
        cout << "Kurang: " << Kurang << endl;
        cout << "Kali: " << Kali << endl;
        cout << "Bagi: " << Bagi << endl;
    }
    
    return 0;
}