/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:29 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 12:37:05 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

#include "Brain.hpp"

class Animal {
 protected:
  std::string type_;

 public:
  Animal();
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  virtual ~Animal();

  std::string getType() const;

  virtual void makeSound() const;
};

#endif
