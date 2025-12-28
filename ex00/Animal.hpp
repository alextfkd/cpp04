/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:29 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 06:29:38 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
For every exercise, you have to provide the most complete tests you can.
Constructors and destructors of each class must display specific messages.

Don’t use the same message for all classes.

Start by implementing a simple base class called Animal.

It has one protected attribute:
• std::string type;

Implement a Dog class that inherits from Animal.

Implement a Cat class that inherits from Animal.

These two derived classes must set their type field depending on their name.

Then, the Dog’s type will be initialized to "Dog", and the Cat’s type will be
initialized to "Cat".

The type of the Animal class can be left empty or set to the value of your
choice.

Every animal must be able to use the member function:
makeSound() It will print an appropriate sound (cats don’t bark).
*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

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
