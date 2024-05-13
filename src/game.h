#pragma once

#include <iostream>
#include "enums.h"

Choice makeChoice();
Choice makePcChoice();
Result gameFunc(Choice playerChoice, Choice pcChoice);