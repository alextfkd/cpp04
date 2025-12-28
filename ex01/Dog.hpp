/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:43 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 12:37:27 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal {
 private:
  Brain* brain_;

 public:
  Dog();
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  ~Dog();

  void makeSound() const;
};

#endif
