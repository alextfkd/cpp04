/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:46 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 11:55:17 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

template <typename T>
void constructorTest(const std::string& type) {
  std::cout << "=== Constructor Test Start ===" << std::endl;
  std::cout << "=== 1. Default Constructor Test ===" << std::endl;
  T instance_0;
  T instance_1;
  std::cout << type << " 0 type: " << instance_0.getType() << std::endl;
  std::cout << type << " 1 type: " << instance_1.getType() << std::endl;

  std::cout << "\n=== 2. Copy Constructor Test ===" << std::endl;
  T instance_0copy(instance_0);  // NOLINT
  std::cout << type << " 0 (copy) type: " << instance_0copy.getType()
            << std::endl;

  std::cout << "\n=== 3. Copy Assignment Operator Test ===" << std::endl;
  T instance_1copyassigned;
  instance_1copyassigned = instance_1;
  std::cout << type << " 1 type: " << instance_1.getType() << std::endl;
  std::cout << type
            << " 1 (copy-assigned) name: " << instance_1copyassigned.getType()
            << std::endl;
  std::cout << "=== Constructor Test  End ===" << std::endl << std::endl;
}

int main() {
  constructorTest<Animal>("Animal");
  constructorTest<Cat>("Cat");
  constructorTest<Dog>("Dog");
  const Animal* meta = new Animal();
  const Animal* dog  = new Dog();
  const Animal* cat  = new Cat();
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound();
  dog->makeSound();
  meta->makeSound();
  delete meta;
  delete dog;
  delete cat;

  return 0;
}
