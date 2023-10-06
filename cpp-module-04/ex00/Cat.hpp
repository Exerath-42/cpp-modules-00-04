#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:

        virtual void makeSound() const;

        Cat();
        Cat(const Cat &Cat);
        Cat& operator= (const Cat &Cat);
        ~Cat();

};

#endif