#include <iostream>
using namespace std;

// Fungsi bantuan untuk mendemonstrasika nshort-circuit
bool fungsiBerbahaya() {
    cout << "---> Fungsi ini dijalankan!\n";
    return true;
}

int main() {
    int umur = 25;
    bool punyaSIM = true;

    // --- Penggunaan Standar ---
    // AND: Keduanya harus true
    bool bolehMenyetir = (umur >= 10) && punyaSIM;
    cout << "Boleh menyetir? " << bolehMenyetir << "\n"; // 1 (true)

    // OR: Salah satu true sudah cukup
    bool diskonPelajar = (umur < 10) || (umur > 60);
    cout << "Dapat diskon? " << diskonPelajar << "\n"; // 0 (False)

    // NOT: Membalikan nilai
    cout << "Tidak punya SIM? " << !punyaSIM << "\n"; // 0 (false)

    // --- Demonstrasi Short-Circuit ---
    cout << "Tes Short-Circult AND (&&):\n";
    // Karena bagian kiri (false) mematikan syarat &&, fungsi di kanan TIDAK dipanggil.
    bool tes1 = false && fungsiBerbahaya();

    cout << "\nTes Short-Circult OR (||);\n";
    // Karena bagian kiri (true) sudah memenuhi syarat ||, fungsi di kanan TIDAK dipanggil.
    bool tes2 = true || fungsiBerbahaya();

    return 0;
}