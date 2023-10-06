#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:

        virtual void makeSound() const;

        Dog();
        Dog(const Dog &dog);
        Dog& operator= (const Dog &dog);
        ~Dog();

};

#endif