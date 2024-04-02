/* Nama : Toriq Mardlatillah
 NRP  : 5223600012 */
#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int> &que) {
    std::stack<int> stk;

    while (!que.empty()) {
        stk.push(que.front());
        que.pop();
    }

    while (!stk.empty()) {
        que.push(stk.top());
        stk.pop();
    }
}

int main() {
    std::queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);

    reverseQueue(que);

    while (!que.empty()) {
        std::cout << que.front() << '\n';
        que.pop();
    }

    return 0;
}