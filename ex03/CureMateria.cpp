/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:34:54 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 03:42:08 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

CureMateria::CureMateria() : AMateria("cure") {}

CureMateria::CureMateria(const CureMateria& other) : AMateria(other) {
  *this = other;
}

CureMateria& CureMateria::operator=(const CureMateria& other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

CureMateria::~CureMateria() {}

AMateria* CureMateria::clone() const {
  CureMateria* cloned = new CureMateria(*this);
  return cloned;
}

void CureMateria::use(ICharacter& target) {
  std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
}
