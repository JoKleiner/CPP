/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:43:57 by joklein           #+#    #+#             */
/*   Updated: 2025/05/27 09:49:11 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(){
	std::cout << " -Animal class-" << std::endl;
	// Animal *undef_animal = new Animal();
	Animal *animal_dog = new Dog();
	Animal *animal_cat = new Cat();

	// std::cout << "Typ Animal: " << undef_animal->getType() << " | Sound: ";
	// undef_animal->makeSound();
	std::cout << "Typ Animal: " << animal_dog->getType() << " | Sound: ";
	animal_dog->makeSound();
	std::cout << "Typ Animal: " << animal_cat->getType() << " | Sound: ";
	animal_cat->makeSound();

	// delete undef_animal;
	delete animal_dog;
	delete animal_cat;
}
