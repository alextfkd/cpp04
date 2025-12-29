/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:21:43 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:25:09 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name_("default") { initInventory(); }

Character::Character(const std::string& name) : name_(name) { initInventory(); }

Character::Character(const Character& other) {
  initInventory();
  *this = other;
}

Character& Character::operator=(const Character& other) {
  if (this != &other) {
    name_ = other.name_;
    for (int idx = 0; idx < 4; idx++) {
      if (this->inventory_[idx]) {
        delete this->inventory_[idx];
        this->inventory_[idx] = NULL;
      }
      if (other.inventory_[idx]) {
        this->inventory_[idx] = other.inventory_[idx]->clone();
      }
    }
  }
  return *this;
}

Character::~Character() {
  for (int idx = 0; idx < 4; idx++) {
    if (this->inventory_[idx]) {
      delete this->inventory_[idx];
    }
  }
}

void Character::initInventory() {
  for (int idx = 0; idx < 4; idx++) {
    inventory_[idx] = NULL;
  }
}

bool Character::isValidIndex(int idx) { return (0 <= idx && idx < 4); }

const std::string& Character::getName() const { return name_; }

void Character::equip(AMateria* materia) {
  if (materia == NULL) {
    std::cout << "(Invalid materia. Nothing happens.)" << std::endl;
    return;
  }
  for (int idx = 0; idx < 4; idx++) {
    if (inventory_[idx] == NULL) {
      inventory_[idx] = materia;
      std::cout << "(Successfully equipped " << materia->getType()
                << " materia.)" << std::endl;
      return;
    }
  }
  std::cout << "(Inventory is full. Nothing happens.)" << std::endl;
}

void Character::unequip(int idx) {
  if (!Character::isValidIndex(idx)) {
    std::cout << "(Inventory[" << idx << "]is empty. Nothing happens.)"
              << std::endl;
    return;
  }
  if (inventory_[idx] != NULL) {
    inventory_[idx] = NULL;
    std::cout << "(Successfully unequipped materia.)" << std::endl;
    return;
  }
  std::cout << "(Inventory[" << idx << "]is empty. Nothing happens.)"
            << std::endl;
}

void Character::use(int idx, ICharacter& target) {
  if (!Character::isValidIndex(idx)) {
    std::cout << "(Inventory[" << idx << "]is empty. Nothing happens.)"
              << std::endl;
    return;
  }
  if (inventory_[idx]) {
    inventory_[idx]->use(target);
    std::cout << "(Successfully used materia.)" << std::endl;
    return;
  }
  std::cout << "(Inventory[" << idx << "]is empty. Nothing happens.)"
            << std::endl;
}
