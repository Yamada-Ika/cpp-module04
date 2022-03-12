#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define START() std::cout << __func__ << " start!" << std::endl;
# define END() std::cout << __func__ << " end!" << std::endl;

void  NormalTest(void) {
  START();
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete i;
  delete j;
  END();
}

int main(void) {
  NormalTest();

  return 0;
}
