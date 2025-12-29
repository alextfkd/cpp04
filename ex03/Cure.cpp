/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:34:54 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 06:54:49 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) { *this = other; }

Cure& Cure::operator=(const Cure& other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
  Cure* cloned = new Cure(*this);
  return cloned;
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
}
