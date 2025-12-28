/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:25 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 08:04:55 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("AAnimal") {
  std::cout << this->getType() << " default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
  *this = other;
  std::cout << this->getType() << " copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  std::cout << this->getType() << " copy assignment constructor called."
            << std::endl;
  return *this;
}

AAnimal::~AAnimal() {
  std::cout << this->getType() << " destructor called." << std::endl;
}

void AAnimal::makeSound() const {
  std::cout << "(" << getType() << " cannot make sounds...)" << std::endl;
}

std::string AAnimal::getType() const { return type_; }
