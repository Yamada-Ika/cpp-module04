#include "Cure.hpp"

#include <iostream>

Cure::Cure(void) {
    //   std::cout << "Cure default constructor called" << std::endl;
    type_ = "cure";
}

Cure::Cure(const Cure& other) {
    *this = other;
}

Cure::~Cure(void) {
    // std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
    this->type_ = other.type_;
    return *this;
}

AMateria* Cure::clone(void) {
    return new Cure();
}

void Cure::use(const ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
