#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

       void setIdea(int index, std::string idea); //write an idea on specific position
       std::string getIdea(int index) const; //read an idea from specific position
};

#endif