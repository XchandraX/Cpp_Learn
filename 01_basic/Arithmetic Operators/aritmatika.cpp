#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    // --- Operator Standar ---
    cout << "Penjumlahan : " << a + b << "\n"; // Hasil: 13
    cout << "Pengurangan : " << a - b << "\n"; // Hasil: 7
    cout << "Perkalian : " << a * b << "\n"; // Hasil: 30

    // --- Perhatikan perbedaan pembagian ini:
    cout << "Bagi (Int)     : " << a / b << "\n";       // Hasil: 3
    cout << "Bagi (Float)   : " << (float)a / b << "\n";    // Hasil: 3.3333

    cout << "Modulus        : " << a % b << "\n"; // Hasil: 1 (Sisa pembagian)

    // --- Increment & Decrement ---
    int X = 5;

    // Postfix: cetak dulu (5), baru tambah (jadi 6)
    cout << "Postfix x++ : " << X++ << "\n";

    // Prefix: tambah dulu (jadi 7), baru cetak (7)
    cout << "Prefix ++X  : " << ++X << "\n";

    return 0;
}