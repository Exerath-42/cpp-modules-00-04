#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <stdlib.h>

class Brain
{
    private:
    
        std::string ideas[100];

    public:

        Brain();
        Brain(const Brain &Brain);
        Brain& operator= (const Brain &Brain);
        ~Brain();

        std::string const &getIdea(int index) const;
};

#endif