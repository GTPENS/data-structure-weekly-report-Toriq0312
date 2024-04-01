/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
#include <iostream>
#include <cstring>

void reverseString(char expn[], int length) {
    int lower = 0;
    int upper = length - 1;
    char tempChar;
    while (lower < upper) {
        tempChar = expn[lower];
        expn[lower] = expn[upper];
        expn[upper] = tempChar;
        lower++;
        upper--;
    }
}

void replaceParanthesis(char a[], int length) {
    for (int i = 0; i < length; i++) {
        if (a[i] == '(') {
            a[i] = ')';
        } else if (a[i] == ')') {
            a[i] = '(';
        }
    }
}

char* infixToPostfix(char infix[]) {
    // Implement your infix to postfix conversion logic here
    // ...
    // Return the postfix expression
}

char* infixToPrefix(char infix[]) {
    int length = strlen(infix);
    reverseString(infix, length);
    replaceParanthesis(infix, length);
    char* postfix = infixToPostfix(infix);
    reverseString(postfix, strlen(postfix));
    return postfix;
}

int main() {
    char expn[] = "10+((3))*5/(16-4)";
    char* value = infixToPrefix(expn);
    std::cout << "Infix Expn: " << expn << std::endl;
    std::cout << "Prefix Expn: " << value << std::endl;

    return 0;
}
  /* Analysis :
  Fungsi reverseString membalikkan string karakter.
  Fungsi replaceParanthesis mengganti tanda kurung buka dengan tanda       kurung tutup dan sebaliknya.
  Fungsi infixToPostfix belum diimplementasikan, tetapi Anda dapat         mengisinya dengan algoritma konversi infix ke postfix yang sesuai.
  Fungsi infixToPrefix membalikkan string infix, mengganti tanda     
   kurung, mengonversi ke postfix, dan membalikkan hasilnya kembali ke 
   bentuk prefix.
  Fungsi main menunjukkan penggunaan fungsi infixToPrefix dengan contoh 
   ekspresi “10+((3))*5/(16-4)”. */