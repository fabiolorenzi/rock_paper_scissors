#pragma once

#include <ctime>
#include <iostream>
#include <string>
#include "enums.h"

Choice makeChoice();
Choice makePcChoice();
std::string convertChoiceToString(Choice choice);
Result gameFunc(Choice playerChoice, Choice pcChoice);