#include "Cure.hpp"

Cure::Cure(void) {
  std::cout << "Cure default constructor called" << std::endl;
  type_ = "Cure";
}

Cure::~Cure(void) {
  std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone(void) {
  return new Cure();
}

void Cure::use(const ICharacter& target) {
  std::cout << "* heals " << this->getName() << "’s wounds *" << std::endl;
}
