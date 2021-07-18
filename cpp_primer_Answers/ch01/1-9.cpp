/*
    Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.
*/

#include <iostream>

int main(void)
{
    int sum = 0, value = 50;

    while (value < 100)
    {
        sum += value;
        ++value;
    }

    std::cout << sum << std::endl;
    
    return 0;
}