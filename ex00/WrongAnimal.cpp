/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 05:19:14 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 05:19:16 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {}

WrongAnimal::WrongAnimal(const WrongAnimal& other) { *this = other; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  return *this;
}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
  std::cout << "(" << getType() << " cannot make sounds...)" << std::endl;
}

std::string WrongAnimal::getType() const { return type_; }
