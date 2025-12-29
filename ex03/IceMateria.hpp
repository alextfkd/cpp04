/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:16:48 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 16:17:33 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_MATERIA_H
#define ICE_MATERIA_H

#include "AMateria.hpp"

class IceMateria : public AMateria {
 public:
  IceMateria();
  IceMateria(const IceMateria& other);
  IceMateria& operator=(const IceMateria& other);
  virtual ~IceMateria();

  AMateria* clone() const;
  void      use(ICharacter& target);
};

#endif
