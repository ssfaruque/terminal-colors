#include <iostream>

#include "terminalColors.h"


int main(int argc, char** argv)
{
    std::cout << tc::fg_red << "Red text" << std::endl;
    std::cout << tc::bold << "Bright red text" << std::endl;
    std::cout << tc::normal << "Normal text" << std::endl;
    std::cout << tc::normal << tc::fg_green << tc::underline << "Green text underlined" << std::endl;
    std::cout << tc::normal;

    return 0;
}