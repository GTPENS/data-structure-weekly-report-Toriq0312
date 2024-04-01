/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
#include <iostream>
#include <stack>
#include <sstream>

int postfixEvaluate(const std::string& expn)
{
    std::stack<int> stk;
    std::istringstream iss(expn);
    std::string token;

    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            int num2 = stk.top();
            stk.pop();
            int num1 = stk.top();
            stk.pop();

            if (token == "+")
                stk.push(num1 + num2);
            else if (token == "-")
                stk.push(num1 - num2);
            else if (token == "*")
                stk.push(num1 * num2);
            else if (token == "/")
                stk.push(num1 / num2);
        }
        else
        {
            stk.push(std::stoi(token));
        }
    }

    return stk.top();
}

int main()
{
    std::string expn = "6 5 2 3 + 8 * + 3 + *";
    int value = postfixEvaluate(expn);
    std::cout << "Given Postfix Expn: " << expn << std::endl;
    std::cout << "Result after Evaluation: " << value << std::endl;

    return 0;
}
/* Analysis :
Fungsi postfixEvaluate membaca token per token dari string ekspresi dan melakukan operasi sesuai dengan operator atau operand.
Jika token adalah operator, dua operand diambil dari stack dan hasil operasi ditempatkan kembali ke dalam stack.
Jika token adalah operand, konversi string ke integer dan masukkan ke dalam stack.
Fungsi main menunjukkan penggunaan fungsi postfixEvaluate dengan contoh ekspresi “6 5 2 3 + 8 * + 3 + *”. */