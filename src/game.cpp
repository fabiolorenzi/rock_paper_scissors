#include "game.h"

Choice makeChoice()
{
    int choice {0};
    bool validChoice = false;

    for (;;) {
        std::cout << "Please choose using the numbers:" << std::endl;
        std::cout << "Rock: 0, Paper: 1, Scissors: 2" << std::endl;
        std::cin >> choice;

        if (choice < 0 || choice > 2) {
            std::cout << "The value has to be between 0 and 2" << std::endl;
            std::cout << std::endl;
        } else {
            validChoice = true;
        }

        if (validChoice) {
            break;
        }
    }

    return static_cast<Choice>(choice);
}

Choice makePcChoice()
{
    int pcChoice = rand() % 3;
    return static_cast<Choice>(pcChoice);
}

Result gameFunc(Choice playerChoice, Choice pcChoice)
{
    std::cout << "You have chosen " << playerChoice << std::endl;
    std::cout << "PC has chosen " << pcChoice << std::endl;

    Result result;
    if (playerChoice == pcChoice) {
        result = Result::Fair;
    } else {
        if (
            (playerChoice == Choice::Rock && pcChoice == Choice::Paper)
            || (playerChoice == Choice::Paper && pcChoice == Choice::Scissors)
            || (playerChoice == Choice::Scissors && pcChoice == Choice::Rock)
        ) {
            result = Result::Lost;
        } else {
            result = Result::Win;
        }
    }

    return result;
}