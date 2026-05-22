#include "A_Animal.hpp"
#include "Wronganimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrongcat.hpp"

int main()
{
    std::cout << "--- Polymorfism ---" << std::endl;
    
    const A_Animal* dog = new Dog();
    const A_Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog makes sound: ";
    dog->makeSound();
    
    std::cout << "Cat makes sound: ";
    cat->makeSound();
    std::cout << std::endl;

    delete dog;
    delete cat;

    /*std::cout << "\n--- Abstraction (should fail during compilation)---" << std::endl;
       "cannot instantiate abstract class" nebo "object of abstract class type is not allowed"
    */
  	//A_Animal testObject;
    
    return 0;
}