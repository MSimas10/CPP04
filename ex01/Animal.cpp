#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl; 
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" <<std::endl; 
    *this = other;
}
