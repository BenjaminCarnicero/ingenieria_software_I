#include "fisherPenguin.hpp"
#include <iostream>

FisherPenguin::FisherPenguin(std::string penguinName) {
    name = penguinName;
}

void FisherPenguin::fish() {
    std::cout << name << " is fishing fish" << std::endl;
}
