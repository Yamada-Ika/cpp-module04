#include "AMateria.hpp

#include <string>

AMateria::AMateria(std::string const & type) {
  std::cout << "AMateria default constructor called" << std::endl;
  type_ = type;
}

std::string const & AMateria::getType(void) {
  return type_;
}
