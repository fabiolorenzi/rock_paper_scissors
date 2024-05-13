#include "texts.h"

void initialScript()
{
    std::cout << "Welcome to Rock, Paper, Sissors!" << std::endl;
    std::cout << "Developed in C++ by F.Lorenzi" << std::endl;
}

void resultScript(Result result)
{
    switch (result) {
        case Result::Win:
            std::cout << "You won!" << std::endl;
            break;
        case Result::Lost:
            std::cout << "You lost!" << std::endl;
            break;
        case Result::Fair:
            std::cout << "Fair!" << std::endl;
            break;
    }
}

bool repeatGameScript()
{
    int playerChoice {0};
    std::cout << "Do you want to play again? No: 0, Yes: 1" << std::endl;
    std::cin >> playerChoice;
    if (playerChoice == 1) {
        std::cout << std::endl;
        return true;
    }
    return false;
}