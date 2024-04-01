/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
    #include <iostream>
    #include <stack>
    #include <string>

    bool isPalindrome(const std::string& str) {
        std::stack<char> stack;
        int length = str.length();
        int i, mid = length / 2;

        for (i = 0; i < mid; i++) {
            stack.push(str[i]);
        }

        for (i = mid + length % 2; i < length; i++) {
            if (stack.top() != str[i]) {
                return false;
            }
            stack.pop();
        }

        return true;
    }

    int main() {
        std::string input = "madam";
        bool result = isPalindrome(input);

        if (result) {
            std::cout << input << " is a palindrome." << std::endl;
        } else {
            std::cout << input << " is not a palindrome." << std::endl;
        }

        return 0;
    }
  /* Analysis :
Fungsi isPalindrome menerima string sebagai argumen dan memeriksa apakah string tersebut merupakan palindrom.
Pertama, panjang string dihitung dan variabel mid menunjukkan indeks tengah (jika panjang ganjil).
Kemudian, karakter-karakter pertama setengah string dimasukkan ke dalam stack.
Selanjutnya, karakter-karakter dari setengah kedua string dibandingkan dengan karakter-karakter yang diambil dari stack. Jika ada perbedaan, fungsi mengembalikan false.
Jika semua karakter cocok, fungsi mengembalikan true. */