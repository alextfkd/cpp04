/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:58:06 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 14:01:17 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

/*
Implement a Brain class. It contains an array of 100 std::string called ideas.
This way, Dog and Cat will have a private Brain* attribute.
Upon construction, Dog and Cat will create their Brain using new Brain();
Upon destruction, Dog and Cat will delete their Brain.


In your main function, create and fill an array of AAnimal objects. Half of it
will be Dog objects and the other half will be Cat objects. At the end of your
program execution, loop over this array and delete every AAnimal. You must
delete directly dogs and cats as AAnimals. The appropriate destructors must be
called in the expected order.
*/

class Brain {
 private:
  std::string  ideas_[100];  // NOLINT
  unsigned int idea_count_;

 public:
  Brain();
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);
  ~Brain();

  void        setIdea(const std::string& idea);
  std::string getIdea(unsigned int idx);
  void        callAllIdeas();
};

#endif
