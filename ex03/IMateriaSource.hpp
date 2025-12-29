/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:32:23 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/29 08:31:35 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_H
#define I_MATERIA_SOURCE_H

#include "AMateria.hpp"

class IMateriaSource {  // NOLINT
 public:
  virtual ~IMateriaSource() {}
  virtual void      learnMateria(AMateria*)                = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
