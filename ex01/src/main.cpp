#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define START() std::cout << "function : " << __func__ << " start!" << std::endl;
# define END() std::cout << "function : " << __func__ << " end!" << std::endl;

__attribute__((destructor))
void destructor(void) {
  system("leaks a.out");
}

void  NormalTest(void) {
  START();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;
  END();
}

int main(void) {
  NormalTest();

  return 0;
}
