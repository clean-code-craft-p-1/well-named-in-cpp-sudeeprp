#pragma once
#include <iostream>

#include "colorcoder.h"

void printManual() {
    std::cout << "|  Pair number | Major color | Minor color |" << std::endl;
    std::cout << "|--------------|-------------|-------------|" << std::endl;
    for (int i = 1; i <= 25; i++) {
        std::cout << "| " << i << "   | ";
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << colorPair.ToString() << " |" << std::endl;
    }
}
