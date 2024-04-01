/* Nama : Toriq Mardlatillah
   NRP  : 5223600012 */
#include <iostream>
#include <stack>

bool isBalancedParenthesis(const std::string& expn)
{
    std::stack<char> stk;
    for (char ch : expn)
    {
        switch (ch)
        {
            case '{':
            case '[':
            case '(':
                stk.push(ch);
                break;
            case '}':
                if (stk.empty() || stk.top() != '{')
                    return false;
                stk.pop();
                break;
            case ']':
                if (stk.empty() || stk.top() != '[')
                    return false;
                stk.pop();
                break;
            case ')':
                if (stk.empty() || stk.top() != '(')
                    return false;
                stk.pop();
                break;
        }
    }
    return stk.empty();
}

int main()
{
    std::string expn = "{()}[";
    bool value = isBalancedParenthesis(expn);
    std::cout << "Given Expn: " << expn << std::endl;
    std::cout << "Result after isParenthesisMatched: " << (value ? "true" : "false") << std::endl;

    return 0;
}
/* Analysis :
  Fungsi isBalancedParenthesis memeriksa apakah tanda kurung dalam    
  string expn terdapat dalam pasangan yang benar dan seimbang.
  Jika tanda kurung tidak seimbang, fungsi mengembalikan false.
  Fungsi main menunjukkan penggunaan fungsi isBalancedParenthesis 
  dengan contoh string {()}[ dan mencetak hasilnya. */