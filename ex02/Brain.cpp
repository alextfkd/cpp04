/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:58:09 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 12:40:17 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : idea_count_(0) {
  std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
  *this = other;
  std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other) {
    idea_count_ = other.idea_count_;
    for (unsigned int idx = 0; idx < idea_count_; idx++) {
      ideas_[idx] = other.ideas_[idx];
    }
  }
  std::cout << "Brain copy assignment constructor called." << std::endl;
  return *this;
}

Brain::~Brain() {}

void Brain::setIdea(const std::string& idea) {
  if (idea_count_ == 100) {  // NOLINT
    std::cout << "Too many ideas in my brain!!" << std::endl;
    return;
  }
  ideas_[idea_count_] = idea;
  idea_count_++;
}

std::string Brain::getIdea(unsigned int idx) {
  if (idea_count_ < idx) {
    return "I have no idea.";
  }
  return ideas_[idx];
}

void Brain::callAllIdeas() {
  if (idea_count_ == 0) {
    std::cout << "..." << std::endl;
    return;
  }
  for (unsigned int idx = 0; idx < idea_count_; idx++) {
    std::cout << getIdea(idx) << std::endl;
  }
}
