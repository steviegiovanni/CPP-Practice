#include "stdafx.h"

#include "Animal.h"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(int i) {
	std::cout << "Animal constructor with input" << std::endl;
}

Cat::Cat() {
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(int i) {
	std::cout << "Cat constructor with input" << std::endl;
}

Dog::Dog() {
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(int i) {
	std::cout << "Dog constructor with input" << std::endl;
}