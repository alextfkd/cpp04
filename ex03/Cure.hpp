/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 06:54:43 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 06:54:45 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_MATERIA_H
#define CURE_MATERIA_H

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure();
  Cure(const Cure& other);
  Cure& operator=(const Cure& other);
  virtual ~Cure();

  AMateria* clone() const;
  void      use(ICharacter& target);
};

#endif
