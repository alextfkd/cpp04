/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 06:55:06 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 06:55:08 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) { *this = other; }

Ice& Ice::operator=(const Ice& other) {
  if (this != &other) {
    // type_ = other.type_;
    AMateria::operator=(other);
  }
  return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
  Ice* cloned = new Ice(*this);
  return cloned;
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " + target.getName() + " *"
            << std::endl;
}
