#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) {
  std::cout << "Dog default constructor called" << std::endl;
  type = "Dog";
  brain_ = new Brain();
}

Dog::Dog(const Dog& other) {
  std::cout << "Dog copy constructor called" << std::endl;
  *this = other;
}

Dog::~Dog(void) {
  std::cout << "Dog destructor called" << std::endl;
  delete brain_;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &other) {
    this->type = other.type;
    Brain* brain = new Brain();
    *brain = *other.brain_;
    // delete this->brain_;
    this->brain_ = brain;
  }
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "woof woof" << std::endl;
}
