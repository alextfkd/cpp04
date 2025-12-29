/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 03:52:11 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:26:12 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Your Character must have a constructor taking its name as a parameter.

Any copy (using copy constructor or copy assignment operator) of a Character
must be deep.

During copy, the Materias of a Character must be deleted before the new ones are
added to their inventory. Of course, the Materias must be deleted when a
Character is destroyed.

In a nutshell, your MateriaSource must be able to learn "templates" of Materias
to create them when needed. Then, you will be able to generate a new Materia
using just a string that identifies its type.
*/

#include "MateriaSource.hpp"

void MateriaSource::initMemory() {
  for (int idx = 0; idx < 4; idx++) {
    memory_[idx] = NULL;
  }
}

MateriaSource::MateriaSource() : memory_index_(0) { initMemory(); }

MateriaSource::MateriaSource(const MateriaSource& other) : memory_index_(0) {
  initMemory();
  *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this != &other) {
    memory_index_ = other.memory_index_;
    for (int idx = 0; idx < 4; idx++) {
      if (this->memory_[idx]) {
        delete this->memory_[idx];
        this->memory_[idx] = NULL;
      }
      if (other.memory_[idx]) {
        memory_[idx] = other.memory_[idx]->clone();
      }
    }
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  for (int idx = 0; idx < 4; idx++) {
    if (this->memory_[idx]) {
      delete this->memory_[idx];
    }
  }
}

/*
• learnMateria(AMateria*)
Copies the Materia passed as a parameter and stores it in memory so it can be
cloned later. Like the Character, the MateriaSource can know at most 4
Materias. They are not necessarily unique.
*/
void MateriaSource::learnMateria(AMateria* materia) {
  if (!materia) {
    std::cerr << "m == NULL" << std::endl;
    return;
  }
  if (memory_[memory_index_]) {
    delete memory_[memory_index_];
    memory_[memory_index_] = NULL;
  }
  memory_[memory_index_] = materia->clone();
  delete materia;
  if (!memory_[memory_index_]) {
    std::cerr << "learnMateria() failure." << std::endl;
  }
  memory_index_ = (memory_index_ + 1) % 4;
}

/*
• createMateria(std::string const &)
Returns a new Materia.
The latter is a copy of the Materia previously learned by the MateriaSource
whose type equals the one passed as parameter.
Returns 0 if the type is unknown.
*/
AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int idx = 0; idx < 4; idx++) {
    if (memory_[idx] && memory_[idx]->getType() == type) {
      AMateria* created = memory_[idx]->clone();
      return created;
    }
  }
  return NULL;
}
