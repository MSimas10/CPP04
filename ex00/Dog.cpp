#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this-> _type = "Dog";
}
Dog::Dog(std::string type)
{
    std::cout << "Calling dog parametrized constructor" << std::endl;
    this-> _type = type;
}
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        _type = other._type;
    }
    std::cout << "Dog asignment operator called." << std::endl;

    return *this;
}

Dog::~Dog()
{
     std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound() const
 {
    std::cout << "Haf Haf" << std::endl;
 }
