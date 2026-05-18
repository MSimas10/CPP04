#include "Animal.hpp"
#include "Wronganimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrongcat.hpp"

int main()
{

std::cout << "\n--- ANIMAL FARM TEST ---" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;


std::cout << "\n--- WRONG ANIMAL TEST ---" << std::endl;
const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongWrongCat = new WrongCat();

std::cout << wrongWrongCat->getType() << " " << std::endl;
wrongWrongCat->makeSound(); //no WrongCat sound
wrongMeta->makeSound();

delete wrongMeta;
delete wrongWrongCat;

return 0;
}


