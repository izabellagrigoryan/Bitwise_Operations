// AND_operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool and_operator(short number)
{
    number = number >> 10;
    std::cout << number << std::endl;

    number = number & (short)1;
    std::cout << number << std::endl;

    if (number == 1)
        return true;

    return false;
}

int main()
{
    std::cout << and_operator(SHRT_MAX);

    return 0;
}

