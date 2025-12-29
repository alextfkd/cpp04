/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:21:43 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:31:12 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_H
#define I_CHARACTER_H

#include <string>

class AMateria;

class ICharacter {  // NOLINT
 public:
  virtual ~ICharacter() {}
  const virtual std::string& getName() const                  = 0;
  virtual void               equip(AMateria* materia)         = 0;
  virtual void               unequip(int idx)                 = 0;
  virtual void               use(int idx, ICharacter& target) = 0;
};

#endif
