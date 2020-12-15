#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "You have discovered a bomb in the middle of a bank";
    std::cout << std::endl;
    std::cout << "If you wish to save everyone you are going to have to enter the correct disarm code";

    // Declare 3 number code
    const int a = 4;
    const int b = 5;
    const int c = 6;

    const int sum = a + b + c;
    const int product = a * b * c;

    //Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;
    

    return 0;
}