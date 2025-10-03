#ifndef BUILDERPENGUIN_HPP
#define BUILDERPENGUIN_HPP

#include <string>

class BuilderPenguin {
private:
    std::string name;
public:
    BuilderPenguin(std::string penguinName);
    void buildNest();
};

#endif
