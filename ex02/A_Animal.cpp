#include "A_Animal.hpp"

A_Animal::A_Animal(): _type("A_Animal")
{
    std::cout << "A_Animal default constructor called" << std::endl; 
}

A_Animal::A_Animal(const A_Animal& other)
{
    std::cout << "A_Animal copy constructor called" <<std::endl; 
    *this = other;
}
A_Animal& A_Animal::operator=(const A_Animal& other)
{
    std::cout << "A_Animal copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this -> _type = other._type;

    }
    return *this;
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal constructor was destroyed" << std::endl;
}

void A_Animal::makeSound(void) const
{
    std::cout << "A_Animal random sound" << std::endl;
}

std::string A_Animal::getType() const
{
    return this-> _type;
}
