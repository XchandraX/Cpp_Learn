# Compound Assignment Operators
Jalan pintah (shortcut) sintaksis di C++ yang menggabungkan operasi matematika (atau bitwise) dengan operasi penugasan (=). Operator ini memungkinkan Kita memperbarui nilai sebuah variabel tanpa harus menulis ulang nama variabel tersebut dua kali, sehingga kode menjadi lebih ringkas dan mudah dibaca.

Bentuk umum penggunaanya adalah x op= y;, yang secara fungsional sama persis dengan x = x op y;.

## Jenis-jenis Compound Assignment Aritmatika
- Tambah dan Tugaskan (+=) a += 5; sama dengan a = a + 5;
- Kurang dan Tugaskan (-=) a -= 3; sama dengan a = a - 3;
- Kali dan Tugaskan (*=) a += 2; sama dengan a = a * 2;
- Bagi dan Tugaskan (/=) a /= 4; sama dengan a = a / 4;
- Modulus dan Tugaskan (%=) a %= 2; sama dengan a = a % 2;

## Keuntungan Menggunakannya
1. Kode Lebih Bersih: Sangat berguna ketika Kita memiliki nama variabel yang panjang. menulis totalPendapatanBulanan += 500; jauh lebih enak daripada totalPendapatanBulanan = totalPendapatanBulanan + 500;

2. Evaluasi Ruas Kanan: Jika bagian kanan adlaah sebuah persamaan panjang, C++ akan menghitung seluruh persamaan di ruas kanan terlebih dahulu, baru menerapkan operator compound-nya.

Jebakan Logika (Penting):
Jika Kita menulis x *= y + 2;, C++ mengevaluasinya sebagai x = x * (y + 2);.
bukan x = x * y + 2;. Ruas kanan selalu diperlakukan seolah-olah berada di dalam tanda kurung.