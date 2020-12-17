#include <iostream>

// This function prints the welcome message
void IntroductionMessage(){
    std::cout << "\n\nYou have discovered a bomb in the middle of a bank\n\n";
    std::cout << "If you wish to save everyone you are going to have to enter the correct disarm code\n\n";
}

bool PlayGame()
{
//Print welcome messages to the terminal
    IntroductionMessage();

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "\n+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    std::cout << "\nPlease enter the code before it explodes!!!\n\n";
    
    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "The sum of your guesses is: "<< GuessSum << std::endl;
    std::cout << "\nThe product of your guesses is: " << GuessProduct << std::endl;


    // Check if the players guess matches the code in order
    if (GuessA == 4 && GuessB == 5 && GuessC == 6){
        std::cout<<"\nYou win!";
        return true;
    }
    else{
        std::cout<<"You lose, game over!!!";
        return false;
    }
}


int main()
{
    while(true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer
    };

    return 0;
}