#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define START() std::cout << "function : " << __func__ << " start!" << std::endl;
# define END() std::cout << "function : " << __func__ << " end!" << std::endl;

// __attribute__((destructor))
// void destructor(void) {
//   system("leaks a.out");
// }

void  NormalTest(void) {
  START();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;
  END();
}

/**
 * @brief コピー用のテスト
 * @details シャローコピーするように実装していたらクラッシュする
 */
void  CopyTest(void) {
  START();
  Dog src;
  Dog dst = src;
  END();
}

int main(void) {
  // NormalTest();
  CopyTest();

  return 0;
}
