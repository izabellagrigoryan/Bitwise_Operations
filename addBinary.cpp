// addBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b)
    {
        const char* a1 = a.c_str();
        const char* b1 = b.c_str();
        std::stack<int> m_stack;
        string c1;
        int s = 0;
        int carry = 0;
        int len = (a.length() >= b.length() ? a.length() : b.length());
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (len >= 0)
        {
            if (i >= 0)
                s += (a1[i] - 48);
            if (j >= 0)
                s += (b1[j] - 48);
            s += carry;
            if (s == 2)
            {
                carry = 1;
                s = 0;
            }
            else
                carry = 0;

            m_stack.push(s);
            s = 0;
            i--;
            j--;
            len--;
        }        
        if (carry == 1) m_stack.push(1);

        int m = 0;
        while (!m_stack.empty())
        {
            int r = m_stack.top();
            c1 += std::to_string(r);
            m_stack.pop();
            m++;
        }
        
        return c1;
    }
};

int main()
{
    Solution solution;
    string c = solution.addBinary("101010", "1100110");

    std::cout << c;

    return 0;
}
