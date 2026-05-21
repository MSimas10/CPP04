#include "Wrongcat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this-> _type= "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "WrongCat asignment operator called." << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat constructor was destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes Mnau!" << std::endl;
}