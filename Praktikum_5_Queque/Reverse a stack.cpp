/* Nama : Toriq Mardlatillah
 NRP  : 5223600012 */
#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk mencetak isi stack
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    // Inisialisasi stack
    stack<int> currentStack;

    // Add element 
    currentStack.push(1);
    currentStack.push(2);
    currentStack.push(3);
    currentStack.push(4);
    currentStack.push(5);

    // Print stack asli
    cout << "Stack asli: ";
    printStack(currentStack);

    // Reverse a stack
    stack<int> tempStack;
    while (!currentStack.empty()) {
        tempStack.push(currentStack.top());
        currentStack.pop();
    }
    currentStack = tempStack;

    // Print reverse a stack
    cout << "Stack yang sudah dibalik: ";
    printStack(currentStack);

    return 0;
}
