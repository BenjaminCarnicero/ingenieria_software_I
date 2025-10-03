#include <iostream>
#include "FisherPenguin.hpp"
#include "BuilderPenguin.hpp"

int main() {
    FisherPenguin benjamin("Benjamin");
    BuilderPenguin tomas("Tomas");

    benjamin.fish();
    tomas.buildNest();

    return 0;
}
