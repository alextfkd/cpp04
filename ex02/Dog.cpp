/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:06:41 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 14:01:22 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  type_  = "Dog";
  brain_ = new Brain();
  brain_->setIdea("I am a dog.");
  brain_->setIdea("Bow wow!!!");
}

Dog::Dog(const Dog& other) : AAnimal(other) {
  brain_ = new Brain(*other.brain_);
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    type_   = other.type_;
    *brain_ = *other.brain_;
  }
  return *this;
}

Dog::~Dog() { delete brain_; }

void Dog::makeSound() const {
  std::cout << "(" << getType() << ") Bow wow!" << std::endl;
  brain_->callAllIdeas();
}
