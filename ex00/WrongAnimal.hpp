/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 05:18:59 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/28 06:30:00 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
 protected:
  std::string type_;

 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal& operator=(const WrongAnimal& other);
  virtual ~WrongAnimal();

  void        makeSound() const;
  std::string getType() const;
};

#endif
