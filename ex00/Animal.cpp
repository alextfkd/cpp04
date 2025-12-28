/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:25 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 08:04:55 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal") {
  std::cout << this->getType() << " default constructor called." << std::endl;
}

Animal::Animal(const Animal& other) {
  *this = other;
  std::cout << this->getType() << " copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  std::cout << this->getType() << " copy assignment constructor called."
            << std::endl;
  return *this;
}

Animal::~Animal() {
  std::cout << this->getType() << " destructor called." << std::endl;
}

void Animal::makeSound() const {
  std::cout << "(" << getType() << " cannot make sounds...)" << std::endl;
}

std::string Animal::getType() const { return type_; }
