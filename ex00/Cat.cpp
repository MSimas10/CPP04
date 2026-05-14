#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this-> _type= "Cat";
}

Cat::Cat(std::string type)
{
    std::cout << "Calling cat parametrized constructor" << std::endl;
    this->_type= type;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "Cat asignment operator called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Mnau Mnau" << std::endl;
}
