/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:54:11 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:06:00 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("default") {}

AMateria::AMateria(const std::string& type) : type_(type) {}

AMateria::AMateria(const AMateria& other) : type_(other.type_) {}

AMateria& AMateria::operator=(const AMateria& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const { return type_; }

void AMateria::use(ICharacter& target) {
  (void)target;
  std::cerr
      << "Error: Calling an abstract class member function AMateria::use()."
      << std::endl;
}
