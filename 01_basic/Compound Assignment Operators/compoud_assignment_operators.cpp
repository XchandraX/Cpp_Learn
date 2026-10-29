#include <iostream>
using namespace std;

int main() {
    int saldo = 1000;

    // Setor uang 500
    saldo += 500;
    cout << "Setelah setor: " << saldo << "\n"; // Hasil: 1500

    // Tarik uang 200
    saldo -= 200;
    cout << "Setelah tarik: " << saldo << "\n"; // Hasil: 1300

    // Bunga berganda (dikali 2)
    saldo *= 2;
    cout << "Setelah bunga: " << saldo << "\n"; // Hasil: 2600

    // Contoh Jebakan Logika
    int x = 10;
    int y = 5;

    // Ini dieksekusi sebagai: x = 10 * (5 +1)
    x *= y + 1;
    cout << "Nilai x akhir: " << x << "\n";  // Hasil: 60

    return 0;
}