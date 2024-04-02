/* Nama : Toriq Mardlatillah
 NRP  : 5223600012 */
#include <iostream>

class Queue {
private:
    struct Node {
        int value;
        Node* next;
        Node(int v, Node* n) : value(v), next(n) {}
    };

    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

public:
    int size() {
        return count;
    }

    bool Empty() {
        return count == 0;
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
    }

    int peek() {
        if (Empty()) {
            throw std::runtime_error("QueueEmptyException");
        }
        return head->value;
    }

    
};

int main() {
    Queue myQueue;
    myQueue.print(); 

    return 0;
}
/* Analysis :
Terdapat dua tipe Node: head (untuk elemen pertama) dan tail (untuk elemen terakhir).
Metode size() mengembalikan jumlah elemen dalam antrian.
Metode Empty() memeriksa apakah antrian kosong.
Metode print() mencetak semua elemen dalam antrian.
Metode peek() mengembalikan nilai elemen pertama dalam antrian.
Jika antrian kosong, akan dilemparkan QueueEmptyException. */