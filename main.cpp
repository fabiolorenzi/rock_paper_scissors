#include <iostream>
#include "src/enums.h"
#include "src/game.h"
#include "src/texts.h"

int main()
{
    bool repeat = true;
    initialScript();

    for (;;) {
        Choice playerChoice = makeChoice();
        Choice pcChoice = makePcChoice();
        Result result = gameFunc(playerChoice, pcChoice);
        resultScript(result);
        repeat = repeatGameScript();
        if (!repeat) {
            break;
        }
    }

    return 0;
}