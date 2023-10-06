#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:

        Brain *brain;

    public:

        virtual void makeSound() const;
        Brain *getBrain() const;

        Cat();
        Cat(const Cat &Cat);
        Cat& operator= (const Cat &Cat);
        ~Cat();

};

#endif