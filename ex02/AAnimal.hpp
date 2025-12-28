/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:29 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 13:59:50 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

#include "Brain.hpp"

class AAnimal {
 protected:
  std::string type_;

 public:
  AAnimal();
  AAnimal(const AAnimal& other);
  AAnimal& operator=(const AAnimal& other);
  virtual ~AAnimal();

  std::string getType() const;

  virtual void makeSound() const = 0;
};

#endif
