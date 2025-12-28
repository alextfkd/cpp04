/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:37 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 14:01:19 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include "Brain.hpp"

Cat::Cat() {
  type_  = "Cat";
  brain_ = new Brain();
  brain_->setIdea("Wagahai ha neko dearu.");
  brain_->setIdea("Namae ha mada nai.");
}

Cat::Cat(const Cat& other) : AAnimal(other) {
  brain_ = new Brain(*other.brain_);
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    type_   = other.type_;
    *brain_ = *other.brain_;
  }
  return *this;
}

Cat::~Cat() { delete brain_; }

void Cat::makeSound() const {
  std::cout << "(" << getType() << " don't bark)" << std::endl;
  brain_->callAllIdeas();
}
