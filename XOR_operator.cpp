// XOR_operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int xor_operator(std::vector<int>& vec)
{
    int number;

    if (vec.size() != 0)
        number = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        number = number ^ vec[i];
    }
       
    return number;
}

int main()
{
    std::vector<int> m_vec = { 2,3,4,5,6,7,2,3,4,5,6 };

    std::cout << xor_operator(m_vec);

    return 0;
}
