/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:37 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 04:35:32 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() { type_ = "Cat"; }

Cat::Cat(const Cat& other) : Animal(other) { *this = other; }

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  return *this;
}

Cat::~Cat() {}

void Cat::makeSound() const {
  std::cout << "(" << getType() << " don't bark)" << std::endl;
}
