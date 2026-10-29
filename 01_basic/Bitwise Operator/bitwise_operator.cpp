#include <iostream>
using namespace std;

bool fungsiKanan() {
    cout << "   [!] fungsiKanan() dieksekusi!\n";
    return true;
}

int main() {
    int x = 2;  // Biner: 0010
    int y = 1;  // Biner: 0001

    cout << "--- Tes Nilai Keluaran ---\n";
    cout << "Hasil Logika  (2 && 1) : " << (x && y) << "\n";    // Hasil: 1
    cout << "Hasil Bitwise (2 & 1)  : " << (x & y) << "\n";     // Hasil: 0

    cout << "--- Tes Short-circuit (Logika Vs Bitwise) ---\n";

    // Logika &&: Sisi Kiri (False) mematikan eksekusi sisi kanan.
    cout << "Eksekusi false && fungsiKanan():";
    bool tesLogika = false && fungsiKanan();

    // Bitwise &: Tetap mengeksekusi kedua sisi!
    // Peringatan: Jangan pernah menaruh pemanggilan fungsi atau iterasi di dalam bitwise
    // kecuali Kita memang menginginkan eksekusi mutlak.
    cout << "\nEksekusi false & fungsiKanan():\n";
    bool tesBitwise = false & fungsiKanan();

    return 0;
}