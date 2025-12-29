/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 03:52:11 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 04:07:12 by tkatsuma         ###   ########.fr       */
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

MateriaSource::MateriaSource() {}
MateriaSource::MateriaSource(const MateriaSource& other) {}
MateriaSource& MateriaSource::operator=(const MateriaSource& other) {}
MateriaSource::~MateriaSource() {}

/*
• learnMateria(AMateria*)
Copies the Materia passed as a parameter and stores it in memory so it can be
cloned later. Like the Character, the MateriaSource can know at most 4 Materias.
They are not necessarily unique.
*/
void MateriaSource::learnMateria(AMateria*) {}

/*
• createMateria(std::string const &)
Returns a new Materia.
The latter is a copy of the Materia previously learned by the MateriaSource
whose type equals the one passed as parameter.
Returns 0 if the type is unknown.
*/
AMateria* MateriaSource::createMateria(std::string const& type) {}
