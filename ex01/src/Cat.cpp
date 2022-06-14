#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) {
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    brain_ = new Brain();
}

Cat::Cat(const Cat& other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
    delete brain_;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignation operator called" << std::endl;

    if (this == &other) return *this;

    Brain* brain = new Brain();
    *brain = *other.brain_;

    this->type = other.type;
    delete this->brain_;
    this->brain_ = brain;
    return *this;
}

void  Cat::makeSound(void) const {
    std::cout << "meow meow" << std::endl;
}
