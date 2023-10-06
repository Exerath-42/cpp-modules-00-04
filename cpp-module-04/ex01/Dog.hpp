#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:

        Brain *brain;

    public:

        virtual void makeSound() const;
        Brain *getBrain() const;

        Dog();
        Dog(const Dog &dog);
        Dog& operator= (const Dog &dog);
        ~Dog();

};

#endif