/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:13:30 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 07:28:16 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
#define A_MATERIA_H

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria {
 protected:
  std::string type_;

 public:
  AMateria();
  AMateria(const std::string& type);
  AMateria(const AMateria& other);
  AMateria& operator=(const AMateria& other);
  virtual ~AMateria();

  const std::string& getType() const;  // Returns the materia type
  virtual AMateria*  clone() const = 0;
  virtual void       use(ICharacter& target);
};

#endif
