#include <iostream>

#include "coffee.hh"
#include "tea.hh"


int main(void) {
    std::cout << "coffee\n";
    Coffee c;
    c.PrepareRecipe();

    std::cout << "\ntea:\n";
    Tea t;
    t.PrepareRecipe();
    return 0;
}