# Bitwise Operator
Apa yang mereka evaluasi dna bagaimana mereka memprosesnya.
Operator logika mengevaluasi suatu kondisi secara keseluruhan untuk menghasilkan nilai kebenaran (true/false),
Operator Bitwise membedah variabel menjadi angka biner dasar (0 dan 1) dan mengoperasikan setiap bitnya satu per satu.

1. Perbedaan Hasil Evaluasi (Biner Vs Boolean)
Operator logika selalu melihat nilai bukan nol sebagai true dan nol sebagai false. Output akhirnya selalu 1 (true) atau 0 (false).
Operator bitwise sejajar ke bawah membandingkan bit demi bit dari dua angka, dan mengembalikan angka baru dari hasil perbandingan biner tersebut.

Contoh Kasus Kritis: Variabel A = 2 (Biner: 0010) dan B (Biner: 0001).
- Logika (A && B): 2 adlaah true, 1 adalah true. Maka true AND true menghasilkan 1 (True).
- Bitwise (A & B): C++ akan menyusun binernya: 0010 (Angka 2) 0001 (Angka 1)
---- & 0000 (Angka 0). Maka hasilnya adalah 0.

Jika Kita salah mengetik if (A & B) alih-alih if (A && B), program akan membaca hasilnya sebagai false (0) padahal secara logika seharusnya true.

2. Fitur Short-Circuit Evaluation
- Operator Logika (&&, ||): Memiliki short-circuit. Jika sisi kiri sudah cukup untuk menentukan haisl, sisi kanan tidak akan dieksekusi.

- Operator Bitwise(&, |): Tidak memiliki short-circuit. Operator ini bertugas melakukan operasi matematika biner, sehingga wajib menghitung ruas kiri dan kanan secara penuh sebelum membandingkan bit-bitnya.

3. Tipe Data yang Diterima
- Logika: Bisa menerima kondisi apa pun (Perbandingkan ukuran, fungsi boolean, string pointer, dll).

- Bitwise: Hanya bisa digunakan pada tipe data bilangan bulat dasar (integer, char, short, long). Menggunakan bitwise pada float atau double akan menyebabkan error kompilasi.

