/* Nama : Toriq Mardlatillah
 NRP  : 5223600012 */
int Queue::remove() {
    if (Empty()) {
        throw std::runtime_error("QueueEmptyException");
    }
    int value = head->Value;
    head = head->Next;
    count--;
    return value;
}
/* Analysis :
Jika antrian kosong (yaitu head belum terdefinisi), maka akan dilemparkan QueueEmptyException.
Nilai elemen pertama (head) akan disimpan dalam variabel value.
head akan diperbarui untuk menunjuk ke elemen berikutnya.
Jumlah elemen dalam antrian (count) akan dikurangi.
Implementasi ini memastikan bahwa elemen pertama yang dimasukkan akan dikeluarkan terlebih dahulu. */