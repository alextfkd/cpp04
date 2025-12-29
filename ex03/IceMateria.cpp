/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:16:48 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 16:18:41 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"

IceMateria::IceMateria() : AMateria("ice") {}

IceMateria::IceMateria(const IceMateria& other) : AMateria(other) {
  *this = other;
}

IceMateria& IceMateria::operator=(const IceMateria& other) {
  if (this != &other) {
    // type_ = other.type_;
    AMateria::operator=(other);
  }
  return *this;
}

IceMateria::~IceMateria() {}

AMateria* IceMateria::clone() const {
  IceMateria* cloned = new IceMateria(*this);
  return cloned;
}

void IceMateria::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " + target.getName() + " *"
            << std::endl;
}
