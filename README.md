# Tugas-DSA_Kelompok-7_Linked-List

**Nama:** Muhammad Zaky Syahfadil Asshidiq  
**NIM:** D121241068  
**Problem Link:** [Linked List: Day 15: Linked List - HackerRank](https://www.hackerrank.com/challenges/30-linked-list/problem)  
**Difficulty:** Easy  

## Short Approach Summary
**1. Tujuan:**  
  Menambahkan elemen (node) ke akhir dari linked list yang diberikan.  
  
**2. Struktur Data:**  
  Menggunakan struct Node yang berisi data (integer) dan next (pointer ke node berikutnya).  
  
**3. Langkah - Langkah dalam Fungsi insert():**  
  - Buat node baru dengan nilai data.
  - Jika head == NULL, artinya kosong -> kembalikan node baru sebagai head.
  - Jika list tidak kosong -> telusuri sampai ke node terakhir -> sambungkan node baru di akhir.

**4. Fungsi Tambahan:**  
display() digunakan untuk mencetak isi linked list dari depan ke belakang.

**5. Input & Output:**  
  - Program membaca T buah integer dan menambahkannya satu per satu ke list.  
  - Hasil akhirnya adalah elemen-elemen linked list tercetak dalam satu baris, dipisahkan spasi.
