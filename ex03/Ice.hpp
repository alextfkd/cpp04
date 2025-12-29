/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 06:55:26 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 06:55:32 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_MATERIA_H
#define ICE_MATERIA_H

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice& other);
  Ice& operator=(const Ice& other);
  virtual ~Ice();

  AMateria* clone() const;
  void      use(ICharacter& target);
};

#endif
