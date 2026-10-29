# Operator Logika
Digunakan untuk mengevaluasi beberapa kondisi sekaligus dan selalu menghasilkan nilai boolean (true atau false, yang dalam C++ direpresentasikan sebagai 1 atau 0).

1. Jenis Operator Logika Utama

- Logika AND (&&): Menghasilkan true hanya jika semua sisi bernilai true. Jika ada satu saja yang false, hasil akhirnya adalah flase.

- Logika OR (||): menghasilkan true jika minimal satu sisi bernilai true. Hasilnya akhirnya false hanya jika kedua sisi bernilai false.

- Logika NOT (!): Membalikkan keadaan. Jika kondisi bernilai true, ! mengubahnya menjadi false, dan sebaliknya.


2. Konsep 'Short-Circuit Evaluation'
Short-Circuit Evaluation adalah fitur bawaan C++ di mana program berhenti mengevaluasi sebuah ekspresi logika segera setelah hasil akhirnya sudah bisa dipastikan, sehingga kode di sebelah kanan operator diabaikan sepenuhnya.

- Pada Logika AND (&&): Jika kondisi pertama (sebelah kiri) sudha bernilai false, C++ tahu hasil akhirnya pasti false. Kondisi kedua (sebelah kanan) tidak akan dibaca/dijalankan

- Pada Logika OR (||): Jika kondisi pertama sudah bernilai true, C++ tahu hasilnya pasti true. Kondisi kedua tidak akan dibaca/dijalankan.

Mengepaa ini sangat penting dalam industri?
Ini bukan sekadar untuk kecepatan eksekusi, tetapi untuk menghindari crash (kesalahan fatal). Kita bisa meletakkan pemeriksaan keamanan di sebelah kiri, dan operasi bebahaya di sebelah kanan.

Contoh: if (pembagi != 0 && (100 / pembagi > 5))
Jika variabel pembagi bernilai 0, kondisi pertama menjadi false. Karena ini operasi &&, C++ memicu short-circuit dna berhenti. Operasi 100 / pembagi di sebelah kanan tidak pernah dijalankan, menyelmatkan program Kita dar icrash akibat "Pembagian dengan nol" (division by zero).