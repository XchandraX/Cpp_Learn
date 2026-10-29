# Arithmetic Operators
inti dari menipulasi data angka di C++. Selain melakukan operasi matematika dasar, C++ memiliki aturan spesifik terkai tipe data saat menggunakan operator ini, terutama pada pembagian dan modulus.

1. Operator Matematika Standar
Operator ini bekerja pada tipe data numerik seperti int, float, dan double.
- Penjumlahan (+)   : Menambahkan dua nilai.
- Pengurangan (-)   : mengurangi nilai kedua dari nilai pertama
- Perkalian (*)     : Mengelikan dua nilai.
- Pembagian (/)     : Membagi nilai pertama dengan nilai kedua.
    - Catatan Penting: Jika Kita membagi dua bilangan bulat (integer), C++ akan membuang angka desimalnya (dibulatkan ke bawah). Contoh: 5 / 2 menghasilkan 2, bukan 2.5. Agar menghasilkan desimal minimal satu variabel harus berupa float/double (misal: 5.0 / 2).

- Modulus (%)       : mengembalikan sisa dari operasi pembagian
    - Catatan Penting: Modulus hanya dapat digunakan pada tipe data bilangan bulat (integer). Kita tidak bisa menggunakan % pada float atau double .

2. Operator Increment dan Decrement
Operator ini digunakan untuk menambah atau mengurangi nilai variabel sebanyak tepat satu. Ini sangat sering digunakan dalam perulangan (seperti for loop).

- Increment (++): Menambahkan 1 ke variabel.
- Decrement (--): Mengurangi 1 ke variabel.

Nuansa Penting: Prefix vs Postfix
Posisi tanda ++ atau -- memengaruhi kapan penambahan/pengurangan terjadi jika diletakkan di dalam sebuah ekspresi:
- Prefix (++X): Nilai X ditambah 1 terlebih dahulu, baru kemudian digunakan dalam baris kode tersebut
- Postfix (X++): Nilai X digunkanan dlaam baris kode tersebut terlebih dahulu, baru setelah itu nilainya ditambah 1.