/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:34:54 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 15:27:15 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_MATERIA_H
#define CURE_MATERIA_H

#include "AMateria.hpp"

class CureMateria : public AMateria {
 public:
  CureMateria();
  CureMateria(const CureMateria& other);
  CureMateria& operator=(const CureMateria& other);
  virtual ~CureMateria();

  AMateria* clone() const;
  void      use(ICharacter& target);
};

#endif
