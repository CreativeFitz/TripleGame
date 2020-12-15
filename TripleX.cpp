#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "You have discovered a bomb in the middle of a bank";
    std::cout << std::endl;
    std::cout << "If you wish to save everyone you are going to have to enter the correct disarm code" << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
    
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "The sum of your guesses is: "<< GuessSum << std::endl;
    std::cout << "The product of your guesses is: " << GuessProduct << std::endl;

    return 0;
}