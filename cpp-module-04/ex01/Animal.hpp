#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{

    protected:

        std::string type;

    public:

        virtual void makeSound() const;
        std::string const	&getType(void) const;
        Animal();
        Animal(const Animal &Animal);
        Animal& operator= (const Animal &Animal);
        virtual ~Animal();

};

#endif