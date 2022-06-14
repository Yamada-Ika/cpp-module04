#include "AMateria.hpp

#include <string>
#include <iostream>

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria default constructor called" << std::endl;
    type_ = type;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
}

AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria &other) {
    this->type_ = other.type_;
    return *this;
}

std::string const & AMateria::getType(void) {
    return type_;
}

void setType(std::string const& type) {
    type_ = type;
}

