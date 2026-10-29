#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2, hasil;

    // 1. Precedence: Perkalian mengalahkan Penjumlahan
    hasil = a + b * c;
    cout << "a + b * c = " << hasil << "\n"; // Hasil: 20 (5*2 dikerjakan dulu)

    // 2. Menggunakan Kurung untuk memaksa urutan
    hasil = (a + b) * c;
    cout << "(a + b) * c = " << hasil << "\n"; // Hasil: 30 (10+5 dikerjakan dulu)

    // 3. Associativity Kiri ke Kanan ( Bagi dan Kali posisinya setara)
    hasil = a / b * c;
    cout << "a / b * c = " << hasil << "\n"; // Hasil: 4

    // 4. Associativity Kanan ke Kiri (Operator Penugasan)
    int x, y;
    x = y = 100; // 100 masuk ke y, lalu y (100) masuk ke x
    
    // 5. Kombinasi Relasional dan Logika
    // Urutan proses: (b+c) dihitung -> lalu dicek (a > 7) -> lalu dicek logika AND
    bool cek = a > b + c && a == 10;
    cout << "Hasil Logika: " << cek << "\n"; // Hasil: 1 (True)

    return 0;
}