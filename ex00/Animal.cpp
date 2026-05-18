#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl; 
}

Animal::Animal(std::string name): _type(name)
{
    std::cout << " Animal type constructor has been called" << std::endl; 
}

Animal::~Animal()
{
    std::cout << "Animal constructor was destroyed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" <<std::endl; 
    *this = other;
}
Animal &Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other._type;
    }
    return *this;
}


void Animal::makeSound(void) const
{
    std::cout << "Animal random sound" << std::endl;
}

std::string Animal::getType() const
{
    return this-> _type;
}

