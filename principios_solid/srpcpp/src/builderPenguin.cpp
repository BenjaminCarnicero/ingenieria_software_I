#include "BuilderPenguin.hpp"
#include <iostream>

BuilderPenguin::BuilderPenguin(std::string penguinName) {
    name = penguinName;
}

void BuilderPenguin::buildNest() {
    std::cout << name << " is building a nest" << std::endl;
}
