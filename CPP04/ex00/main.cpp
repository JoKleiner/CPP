/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:43:57 by joklein           #+#    #+#             */
/*   Updated: 2025/05/27 09:47:19 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << " -Animal class-" << std::endl;
	Animal *undef_animal = new Animal();
	Animal *animal_dog = new Dog();
	Animal *animal_cat = new Cat();

	std::cout << "Typ Animal: " << undef_animal->getType() << " | Sound: ";
	undef_animal->makeSound();
	std::cout << "Typ Animal: " << animal_dog->getType() << " | Sound: ";
	animal_dog->makeSound();
	std::cout << "Typ Animal: " << animal_cat->getType() << " | Sound: ";
	animal_cat->makeSound();

	delete undef_animal;
	delete animal_dog;
	delete animal_cat;

	std::cout << "\n -Animal with string Class-" << std::endl;
	std::string spcl_type = "Special_Typ";
	Animal *spcl_animal = new Animal(spcl_type);
	Cat *spcl_cat = new Cat(spcl_type);

	std::cout << "Typ Animal: " << spcl_animal->getType() << " | Sound: ";
	spcl_animal->makeSound();
	std::cout << "Typ Animal: " << spcl_cat->getType() << " | Sound: ";
	spcl_cat->makeSound();

	delete spcl_animal;
	delete spcl_cat;

	std::cout << "\n -WrongAnimal class-" << std::endl;
	WrongAnimal *wrong_undef_animal = new WrongAnimal();
	WrongAnimal *wrong_animal_cat = new WrongCat();

	std::cout << "Typ Animal: " << wrong_undef_animal->getType() << " | Sound: ";
	wrong_undef_animal->makeSound();
	std::cout << "Typ Animal: " << wrong_animal_cat->getType() << " | Sound: ";
	wrong_animal_cat->makeSound();

	delete wrong_undef_animal;
	delete wrong_animal_cat;
}
