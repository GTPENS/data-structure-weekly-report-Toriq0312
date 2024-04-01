/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
#include <iostream>
#include <stack>
#include <string>

int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/' || op == '%')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

std::string infixToPostfix(const std::string& expn)
{
    std::stack<char> stk;
    std::string output;

    for (char ch : expn)
    {
        if (std::isdigit(ch))
        {
            output += ch;
        }
        else
        {
            switch (ch)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
                    while (!stk.empty() && precedence(ch) <= precedence(stk.top()))
                    {
                        output += " ";
                        output += stk.top();
                        stk.pop();
                    }
                    stk.push(ch);
                    output += " ";
                    break;
                case '(':
                    stk.push(ch);
                    break;
                case ')':
                    while (!stk.empty() && stk.top() != '(')
                    {
                        output += " ";
                        output += stk.top();
                        stk.pop();
                    }
                    stk.pop(); // Pop the from stack
                    break;
            }
        }
    }

    while (!stk.empty())
    {
        output += " ";
        output += stk.top();
        stk.pop();
    }

    return output;
}

int main()
{
    std::string expn = "10+((3))*5/(16-4)";
    std::string value = infixToPostfix(expn);
    std::cout << "Infix Expn: " << expn << std::endl;
    std::cout << "Postfix Expn: " << value << std::endl;

    return 0;
}
/* Analysis :
Fungsi precedence menentukan prioritas operator.
Fungsi infixToPostfix melakukan pemrosesan karakter per karakter dari ekspresi infix dan menghasilkan ekspresi postfix.
Penggunaan stack untuk mengelola operator dan tanda kurung memastikan urutan yang benar dalam ekspresi postfix.
Fungsi main menunjukkan penggunaan fungsi infixToPostfix dengan contoh ekspresi “10+((3))*5/(16-4)”. */
