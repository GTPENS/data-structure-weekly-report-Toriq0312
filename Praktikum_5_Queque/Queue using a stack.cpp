/* Nama : Toriq Mardlatillah
 NRP  : 5223600012 */
#include <iostream>
#include <stack>

class QueueUsingStack {
private:
    std::stack<int> stk1;
    std::stack<int> stk2;

public:
    void add(int value) {
        stk1.push(value);
    }

    int remove() {
        int value;
        if (!stk2.empty()) {
            return stk2.top();
        }
        while (!stk1.empty()) {
            value = stk1.top();
            stk1.pop();
            stk2.push(value);
        }
        return stk2.top();
    }
};

int main() {
    QueueUsingStack que;
    que.add(1);
    que.add(11);
    que.add(111);
    std::cout << que.remove() << '\n';
    que.add(2);
    que.add(21);
    que.add(211);
    std::cout << que.remove() << '\n';
    std::cout << que.remove() << '\n';

    return 0;
}
/* Analysis :
Metode add menambahkan elemen baru ke dalam antrian dengan memasukkan elemen ke dalam stk1.
Metode remove menghapus elemen pertama dari antrian. Jika stk2 tidak kosong, elemen pertama diambil dari stk2. Jika stk2 kosong, elemen-elemen dari stk1 dipindahkan ke stk2 terlebih dahulu.
Implementasi ini memastikan bahwa elemen pertama yang dimasukkan akan dikeluarkan terlebih dahulu. */