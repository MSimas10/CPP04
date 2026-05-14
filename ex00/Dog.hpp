#ifndef DOG_HPP
#define GOD_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    Dog();
    Dog(std::string type);
    Dog(const Dog& other);
    Dog &operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};

#endif