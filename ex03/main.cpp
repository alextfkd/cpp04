/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:30:54 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:27:18 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  IMateriaSource* src    = new MateriaSource();
  ICharacter*     player = new Character("player");
  ICharacter*     bob    = new Character("bob");

  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  AMateria* tmp;
  tmp = src->createMateria("ice");
  player->equip(tmp);
  tmp = src->createMateria("cure");
  player->equip(tmp);

  player->use(0, *bob);
  player->use(1, *bob);

  delete bob;
  delete player;
  delete src;
}
