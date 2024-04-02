/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
void Queue::add(int value) {
    Node* temp = new Node(value, nullptr);
    if (head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    count++;
}
/* Analysis :
Jika antrian kosong (yaitu head belum terdefinisi), maka head dan tail akan menunjuk ke elemen yang baru ditambahkan.
Jika antrian sudah berisi elemen, maka elemen baru akan ditambahkan setelah elemen terakhir (tail).
Jumlah elemen dalam antrian (count) akan diperbarui.
Implementasi ini memastikan bahwa elemen baru selalu ditempatkan di akhir antrian. */