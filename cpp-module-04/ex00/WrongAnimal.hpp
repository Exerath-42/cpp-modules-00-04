#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{

    protected:

        std::string type;

    public:

        void makeSound() const;
        WrongAnimal();
        WrongAnimal(const WrongAnimal &WrongAnimal);
        WrongAnimal& operator= (const WrongAnimal &WrongAnimal);
        ~WrongAnimal();

};

#endif