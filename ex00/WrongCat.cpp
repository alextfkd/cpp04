/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 05:20:44 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 06:33:51 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { type_ = "WrongCat"; }

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  return *this;
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound() const {
  std::cout << "(" << getType() << " don't bark)" << std::endl;
}
