/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:43:57 by joklein           #+#    #+#             */
/*   Updated: 2025/05/27 09:47:05 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << " -Animal class-" << std::endl;
	Animal *animal_dog = new Dog();
	Animal *animal_cat = new Cat();

	std::cout << "Typ Animal: " << animal_dog->getType() << " | Sound: ";
	animal_dog->makeSound();
	std::cout << "Typ Animal: " << animal_cat->getType() << " | Sound: ";
	animal_cat->makeSound();

	delete animal_dog;
	delete animal_cat;

	std::cout << "\n -Deep copy-" << std::endl;
	Dog origi_dog;
	origi_dog.getBrain()->setIdea(0, "\"Sit = I have to sit down\"");
	
	// Dog *copy_dog = new Dog(origi_dog); //Is also working
	Dog copy_dog = origi_dog; 
	std::cout << "Original dog idea: " << origi_dog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy dog idea: " << copy_dog.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n -Modifying copy-" << std::endl;
	copy_dog.getBrain()->setIdea(0, "\"Sit = I have to bite you\"");
	std::cout << "Origi dog idea: " << origi_dog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy dog idea: " << copy_dog.getBrain()->getIdea(0) << "\n" << std::endl;

	// delete copy_dog;

}
