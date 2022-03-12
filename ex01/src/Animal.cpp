#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) : type("") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
  std::cout << "Animal copy constructor called" << std::endl;
  *this = other;
}

Animal::~Animal(void) {
  std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

std::string  Animal::getType(void) const {
  return (this->type);
}

void  Animal::makeSound(void) const {
  std::cout << "Animal makeSound called" << std::endl;
}
