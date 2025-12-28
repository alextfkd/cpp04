/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:31 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 12:37:21 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal {
 private:
  Brain* brain_;

 public:
  Cat();
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const;
};

#endif
