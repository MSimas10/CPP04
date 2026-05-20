#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this-> _type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        _type = other._type;
        delete this->brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat asignment operator called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Mnau Mnau" << std::endl;
}
