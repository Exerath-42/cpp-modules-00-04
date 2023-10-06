#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{

    protected:

        std::string type;

    public:

        virtual void makeSound() const = 0;
        std::string const	&getType(void) const;
        AAnimal();
        AAnimal(const AAnimal &Aanimal);
        AAnimal& operator= (const AAnimal &Aanimal);
        virtual ~AAnimal();

};

#endif