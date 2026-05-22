#include "Animal.hpp"
#include "Wronganimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrongcat.hpp"

/*
Shallow Copy: Copies pointers as-is, meaning multiple objects point to the same memory. Changing one changes all.
Deep Copy: Allocates new memory and duplicates the actual contents — changes to one object don't affect the other.
*/

/*
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;

}*/


 int main() {
	std::cout << "\n===== POLYMORPHISM TEST =====\n";
	std::cout << std::endl;

	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animals[i];

    
	std::cout << "\n===== Deep copy test (Dog) =====\n";
	std::cout << std::endl;

	Dog dog1;
	dog1.getBrain()->setIdea(0, "Sleep");

	Dog dog2 = dog1; // copy constructor (deep copy)
	dog2.getBrain()->setIdea(0, "barking");

	std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) 
			<< " | Dog2: " << dog2.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n==== Deep copy test (Cat) =====\n";
	std::cout << std::endl;

	Cat cat1;
	cat1.getBrain()->setIdea(0, "chasing bird");

	Cat cat2;
	cat2 = cat1; // assignment operator (deep copy)
	cat2.getBrain()->setIdea(0, "Play");

	std::cout << "Cat1: " << cat1.getBrain()->getIdea(0) 
			<< " | Cat2: " << cat2.getBrain()->getIdea(0) << std::endl;
    
    std::cout << "\n===== Destruction =====\n";
	std::cout << std::endl;
	
	return 0;
}