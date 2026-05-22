#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : A_Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
   if(this != &other)
    {
        _type = other._type;
        Brain* newBrain = new Brain(*other.brain);
        delete this->brain;
        this->brain = newBrain;
    }
    std::cout << "Dog asignment operator called." << std::endl;
    return *this;
}

Dog::~Dog()
{
     std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    }


void Dog::makeSound() const
 {
    std::cout << "Haf Haf" << std::endl;
 }

 Brain *Dog::getBrain() const
{
    return (this->brain);
}