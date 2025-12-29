/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:21:43 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 03:44:50 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : ICharacter {
 private:
  std::string name_;
  AMateria*   inventory_[4];
  void        initInventory();
  bool        isValidIndex(int idx);

 public:
  Character();
  Character(const std::string& name);
  Character(const Character& other);
  Character& operator=(const Character& other);
  ~Character() {}

  const std::string& getName() const;
  void               equip(AMateria* m);
  void               unequip(int idx);
  void               use(int idx, ICharacter& target);
};

#endif
