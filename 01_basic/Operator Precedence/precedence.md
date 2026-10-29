# Precedence (Tingkat keutamaan)
Operator dengan tingkat keutamaan lebih tinggi akan dieksekusi lebih dulu daripada yang lebih rendah. Konsepnya sama persis dengan aturan matematika dasar (di mana perkalian dikerjakan sebelum penjumlahan).

Hierarki keutamaan dari yang paling tinggi ke paling rendah (untuk operator umum):
1. Tanda Kurung: () (Pengendali mutlak)
2. Postfix: X++, X---
3. Prefix & Unary: ++X, --X, !X (Logika NOT), -X (Nilai Negafit)
4. Perkalian/Pembagian/Modulus: *, /, %
5. Penumlahan/Pengurangan: +, -
6. Relasional (Perbandingan): <, >. <=, >=
7. Kesetaraan: ==, 1=
8. Logika AND: &&
9. Logika OR: ||
10. Penugasan (Assignment): =, +=, -=. *=, dll.
(Contoh: Dalam ekspresi 5 + 2 *3, perkalian memiliki precedence lebih tinggi, sehingga dieksekusi lebih dulu menghasilkan 11, bukan 21).

# Associativity (Arah Evaluasi)
Jika ada beberapa operator yang memiliki tingkit keutamaan yang persis sama dengan satu baris (misalnya ada pembagian dan perkalian berderet), C++ menggunakan Associativity untuk menentukan apakah ekspresi dibaca dari Kiri-ke-Kana atau Kanan-ke-Kiri.

- Kiri ke Kana (Left-to-Right): Berlaku untuk sebagian besar operator matematika dna relasional.
Contoh: 10 - 5 - 2 diesksekusi sebagai (10 - 5) - 2 sehingga hasilnya 3.

- Kanan ke Kiri (Right-to-Left): Berlaku untuk operator penugasan (=) dan Unary(!, ++, --)
Contoh: a = b = 5 dieksekusi sebagai a = (b = 5). Nilai 5 dimasukkan ke b terlebih dahulu, lalu nilai b (yaitu 5) dimasukkan ke a.