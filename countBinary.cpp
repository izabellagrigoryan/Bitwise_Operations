// countBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class Solution
{
public:
    int count1 = 0;
    int count0 = 0;

    void countBinary(string a)
    {
        int len = a.length() - 1;
        
        while (len >= 0)
        {
            if ((a[len] - 48) == 0)

                count0++;
            else
                count1++;

            len--;
        }

    }
};
int main()
{
    Solution solution;
    solution.countBinary("010101010111");

    std::cout << solution.count0 << "  " << solution.count1;

    return 0;
}
