#include "Ice.hpp"

#include <iostream>

Ice::Ice(void) {
    // std::cout << "Ice default constructor called" << std::endl;
    type_ = "Ice";
}

Ice::Ice(const Ice& other) {
    *this = other;
}

Ice::~Ice(void) {
    // std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    this->type_ = other.type_;
    return *this;
}

AMateria* Ice::clone(void) {
    return new Ice();
}

void Ice::use(const ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
