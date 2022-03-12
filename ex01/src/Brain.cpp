#include "Brain.hpp"

#include <iostream>

Brain::Brain(void) {
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
  std::cout << "Brain copy constructor called" << std::endl;
  *this = other;
}

Brain::~Brain(void) {
  std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  std::cout << "Brain assignation operator called" << std::endl;
  if (this != &other) {
    for (uint64_t i = 0; i < 100; i++) {
      this->ideas_[i] = other.ideas_[i];
    }
  }
  return *this;
}
