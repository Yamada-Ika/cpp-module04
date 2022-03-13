#include "Ice.hpp"

Ice::Ice(void) {
  std::cout << "Ice default constructor called" << std::endl;
  type_ = "Ice";
}

Ice::~Ice(void) {
  std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone(void) {
  return new Ice();
}

void Ice::use(const ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << this->getName() << " *" << std::endl;
}
